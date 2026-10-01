CC = gcc
CFLAGS = -g -Wall
TARGETS = test1.exe test2.exe test3.exe test4.exe test5.exe test6.exe

all: $(TARGETS)

%.exe: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
