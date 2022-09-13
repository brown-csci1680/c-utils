CC=gcc
CFLAGS=-Wall -O3 -g

.PHONY: all clean
SRC_DIR := ../../

all: htable_example

htable_example: $(SRC_DIR)/htable.c htable_example.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -fv htable_example
