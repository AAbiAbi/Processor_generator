CC = gcc
CFLAGS = -Wall

all: run

run: process_generator.c
    $(CC) $(CFLAGS) -o run process_generator.c

clean:
    rm -f run
