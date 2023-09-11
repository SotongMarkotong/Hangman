CC = g++
CFLAGS = -Wall -g
DEPS = hangman.h
OBJ = main.o hangman.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

run: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)