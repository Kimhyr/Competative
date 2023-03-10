CC=clang++
FLGS=-O3 -std=c++20
EXE=./exe

all:
	$(CC) Main.cpp $(f) -o exe $(FLGS)
	$(EXE)
