CC=gcc
CFLAGS=-Wall -g
LDFLAGS=

.PHONY: all clean

BINS=demo
all: $(BINS)

%.o: %.c
	$(CC) $(CFLAGS) $^ -c

sender: demo.o
	$(CC) $(LDLAGS) $^ -o $@

clean:
	rm -rf *.o $(BINS)
