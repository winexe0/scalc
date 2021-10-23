BIN_DIR = /usr/bin
CC = g++
CFLAGS = 

all: clean scalc

scalc: main.cpp
	$(CC) -o scalc main.cpp -static $(CFLAGS)

install:
	install -m 755 -o root -g root scalc $(BIN_DIR)

clean:
	rm -f scalc
