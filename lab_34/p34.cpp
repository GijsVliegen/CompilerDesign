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

namespace {

struct UninitializedVariable : public FunctionPass {
  static char ID;
  UninitializedVariable() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
  }
};

} // namespace

char UninitializedVariable::ID = 0;

static RegisterPass<UninitializedVariable> X("uninitialized-variable", "Prints uninitialized variables");


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
            // TODO
            errs() << "def-pass\n";
	    return false;
	}
};

class FixingPass : public FunctionPass {
public:
	static char ID;
	FixingPass() : FunctionPass(ID){}

	virtual bool runOnFunction(Function &F){
    // Keep track of the variables that have been initialized.
    std::set<Value *> initialized;

    // Iterate through all instructions in the function.
    for (auto &BB : F) {
      for (auto &I : BB) {
        // If the instruction is a store instruction, add the stored value to the set of initialized variables.
        if (auto *SI = dyn_cast<StoreInst>(&I)) {
          initialized.insert(SI->getValueOperand());
        }
        // If the instruction is a load instruction, check if the loaded value has been initialized.
        if (auto *LI = dyn_cast<LoadInst>(&I)) {
          if (initialized.count(LI->getPointerOperand()) == 0) {
            errs() << "Variable used before initialization: " << *LI->getPointerOperand() << "\n";
          }
        }
      }
    }
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