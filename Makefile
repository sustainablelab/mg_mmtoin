CXXFLAGS = -std=c++11 -Wall -Wpedantic

EXE = mg_mmtoin
SRC = main.cpp
default-target: $(EXE)

$(EXE): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

install: $(EXE)
	cp $(EXE) ~/.local/bin
