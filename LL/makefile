CC=g++
CFLAGS=-I. -I..

all: LL

LL: LL_test.o LL.o NODE.o
	$(CC) $(CFLAGS) -o LL LL_test.o LL.o NODE.o

LL_test.o: LL_test.cpp LL.h NODE.h
	$(CC) $(CFLAGS) -c LL_test.cpp

LL.o: LL.cpp LL.h NODE.h
	$(CC) $(CFLAGS) -c LL.cpp

NODE.o: NODE.cpp NODE.h
	$(CC) $(CFLAGS) -c NODE.cpp

clean:
	rm -f *.o LL LL.exe
