CC=g++
CFLAGS=-std=c++11
OBJECTS=main.o

EXE=app



all:$(EXE)


main.o:main.cpp
	
	$(CC) $(CFLAGS) -c main.cpp

$(EXE): main.o
	
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)
