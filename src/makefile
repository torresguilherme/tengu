CC = g++
DEBUG = -g3
CFLAGS = -std=c++17 -O2 -Wall
SRC = main.cpp cpu.cpp
EXE = tengu

all: FORCE
	$(CC) $(DEBUG) $(CFLAGS) $(SRC) -o $(EXE)
debug:
	gdb ./$(EXE)
FORCE:
	
