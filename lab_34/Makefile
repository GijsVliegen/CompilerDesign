CXXFLAGS = -rdynamic $(shell llvm-config --cxxflags) -g -O0 -std=c++14 -fPIC
LDFLAGS = $(shell llvm-config --ldflags)
LDLIBS = $(shell llvm-config --libs all) -lstdc++fs

all: p34.so

%.so: %.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -shared $^ $(LDLIBS) -o $@

clean:
	rm -f *.o *~ *.so

