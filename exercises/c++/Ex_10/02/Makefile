EXE = exe

LFLAGS = -lutility -I include -L.
CXX =clang++
CXXFLAGS = -fpic -I include -std=c++11
SRCM=main.cc
SRC = src/src1.cc src/src2.cc
OBJ = ${SRC:.cc=.o}

all: $(EXE)

%.o: %.cc
	$(CXX) -c $< -o $@ $(CXXFLAGS)

libutility.so: $(OBJ)
	$(CXX) -shared -o $@ $^

$(EXE): libutility.so
	$(CXX) ${SRCM} -o $(EXE) $(LFLAGS)
	@LD_LIBRARY_PATH=.
	@export LD_LIBRARY_PATH

src/src1.o: include/utility.h include/src1.h
src/src2.o: include/utility.h include/src2.h

clean:
	rm -rf src/*.o $(EXE) */*~ *~

.PHONY: clean all

