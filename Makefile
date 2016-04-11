#makefile hex 
CC=gcc
OPT=`sdl-config --cflags --libs` -lSDL_image -lSDL_ttf
EXEC= hex
all : $(EXEC)
#compile hex
hex.o: hex.c
	$(CC) -o hex.o -c hex.c $(OPT)

main.o : main.c
	$(CC) -o main.o -c main.c $(OPT)

#link hex et main

$(EXEC): hex.o main.o
	$(CC) hex.o main.o -o $(EXEC)

clean:
	rm -rf *.o *.exe *.out $(EXEC)

