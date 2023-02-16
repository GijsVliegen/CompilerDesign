/* Name Surname */

// STL 
#include <map>
#include <vector>
#include <utility>

// LLVM 
#include <llvm/Pass.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Instruction.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/CFG.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/InstIterator.h>
#include <llvm/IR/Constants.h>

// For older versions of llvm you may have to include instead:
// #include "llvm/Support/CFG.h"
// #include <llvm/Support/InstIterator.h>


#include <set>

using namespace llvm;


using namespace llvm;

namespace {

class DefinitionPass  : public FunctionPass {
public:
	static char ID;
	DefinitionPass() : FunctionPass(ID) {}

	virtual void getAnalysisUsage(AnalysisUsage &au) const {
		au.setPreservesAll();
	}

	virtual bool runOnFunction(Function &F) {
    // Keep track of the variables that have been initialized.
    std::set<StringRef> initializedArgs = {};
    std::set<StringRef> uninitialized;
    std::map<StringRef, std::set<StringRef>> initializedPerBBin;
    std::map<StringRef, std::set<StringRef>> initializedPerBBout;
    std::set<StringRef> allPossibleArgs;
    for (auto &BB : F){ //get full set
      initializedPerBBin[BB.getName()] = std::set<StringRef>();
      initializedPerBBout[BB.getName()] = std::set<StringRef>();
      for (auto& I : BB) {
        if (isa<AllocaInst>(I)) {
          allPossibleArgs.insert(I.getName());
        }
      }
    }

    for (auto &BB : F){ //de IN en OUT sets initializeren
      std::copy(allPossibleArgs.begin(), allPossibleArgs.end(), std::inserter(initializedPerBBin[BB.getName()], initializedPerBBin[BB.getName()].end()));
      std::copy(allPossibleArgs.begin(), allPossibleArgs.end(), std::inserter(initializedPerBBout[BB.getName()], initializedPerBBout[BB.getName()].end()));
    }

    for (auto& arg : F.args()) {
      initializedArgs.insert(arg.getName());
    }
    initializedPerBBin["entry"] = initializedArgs;

    bool anythingChanged = true;
    while(anythingChanged){
      anythingChanged = false; //kijken of er nog veranderingen gebeuren
      
      for (auto &BB : F) {
      // Iterate through all instructions in the function.
        errs() << "   in block: " << BB.getName() << "\n"  ;
        std::set<StringRef> intersect;
        for (BasicBlock *Pred : predecessors(&BB)) { //in updaten
          std::set_intersection(initializedPerBBin[BB.getName()].begin(), initializedPerBBin[BB.getName()].end(), initializedPerBBout[Pred->getName()].begin(), initializedPerBBout[Pred->getName()].end(), std::inserter(intersect, intersect.begin())); //unie in <<in>> zetten 
          if (intersect.size() != initializedPerBBin[BB.getName()].size()){ //gewoon size vergelijken omdat er nooit iets gedeleted kan worden
            anythingChanged = true;
            initializedPerBBin[BB.getName()] = intersect;
          }
          intersect = {};
        }

        errs() << "in set values: ";
        for (auto name : initializedPerBBin[BB.getName()]){
          errs() << name << ", ";
        }
        errs() << "\n";
        
        std::set<StringRef> out;
        std::copy(initializedPerBBin[BB.getName()].begin(), initializedPerBBin[BB.getName()].end(), std::inserter(out, out.begin()));
        for (auto &I : BB) { //out updaten
          if (I.getOpcode() == Instruction::Store) {
            auto SI = dyn_cast<StoreInst>(&I);
            out.insert(SI->getPointerOperand()->getName()); //bevat store instructies, die
          }
        }
        if (out.size() != initializedPerBBout[BB.getName()].size()){
          anythingChanged = true;
        }
        initializedPerBBout[BB.getName()] = out;


        errs() << "out set values: ";
        for (auto name : initializedPerBBout[BB.getName()]){
          errs() << name << ", ";
        }
        errs() << "\n";

      }
    }
      
    for (auto &BB : F) {
    // Iterate through all instructions in the function.
      errs() << "begin van blok " << BB.getName() << "\n";
      std::set<StringRef> initialized;
      std::copy(initializedPerBBin[BB.getName()].begin(), initializedPerBBin[BB.getName()].end(), std::inserter(initialized, initialized.begin()));
      for (auto name : initialized){
        errs() << "geinitialiseerde waarden zijn oa: " << name << "\n";
      }
      for (auto &I : BB) {
        if (I.getOpcode() == Instruction::Store) {
          auto SI = dyn_cast<StoreInst>(&I);
          initialized.insert(SI->getPointerOperand()->getName()); //bevat store instructies, die
          errs() << "store instructie : " << SI->getPointerOperand()->getName() << "\n";
        }
        // If the instruction is a load instruction, check if the loaded value has been initialized.
        if (auto *LI = dyn_cast<LoadInst>(&I)) {
          errs() << "load instructie : " << LI->getPointerOperand()->getName() << "\n";
          bool valueInitialized = false;
          for (auto varName : initialized){
            if (LI->getPointerOperand()->getName().compare(varName) == 0){ //niet dezelfde string
              valueInitialized = true;
            }
          }
          if (!valueInitialized){
              errs() << "hier: varnaam = " << LI->getPointerOperand()->getName() << "\n";
              uninitialized.insert(LI->getPointerOperand()->getName());
          }
        }
      }
    }
    for (auto name : uninitialized){
      errs() << name << "\n";
    }
    return false;
	}
};

class FixingPass : public FunctionPass {
public:
	static char ID;
	FixingPass() : FunctionPass(ID){}

	virtual bool runOnFunction(Function &F){
            // TODO
            errs() << "fix-pass\n";
	    return false;
	}
};
} // namespace


char DefinitionPass::ID = 0;
char FixingPass::ID = 1;

// Pass registrations
static RegisterPass<DefinitionPass> X("def-pass", "Reaching definitions pass");
static RegisterPass<FixingPass> Y("fix-pass", "Fixing initialization pass");

/* om string te plaatsen

errs() << “This is a message on LLVM error stream” << end;
*/


/* iterating over all def-use in LLVM

Function *F = ...;
for (User *U : F->users()) {
  if (Instruction *Inst = dyn_cast<Instruction>(U)) {
    errs() << "F is used in instruction:\n";
    errs() << *Inst << "\n";
  }
}
*/