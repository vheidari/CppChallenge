CC=g++
CFLAGES=-std=c++11
OBJECTS=main.o
EXE = app

all:$(EXE)


main.o:main.cpp
	
	$(CC) $(CFLAGES) -c main.cpp

$(EXE):main.o

	$(CC) $(CFLAGES) $(OBJECTS) -o $(EXE)

