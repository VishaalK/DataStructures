CC = clang
GC = g++

CFLAGS = -c -std=c++11 -Wall -Werror -pedantic
LFLAGS = -std=c++11 -Wall -Werror 

OBJS = sorted_array.o main.o
PROG = main.exe

default: $(PROG)

$(PROG): $(OBJS)
	$(GC) $(LFLAGS) $(OBJS) -o $(PROG)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

sorted_array.o: priority_queue.h sorted_array.h sorted_array.cpp
	$(CC) $(CFLAGS) sorted_array.cpp -o sorted_array.o

binary_heap.o: priority_queue.h binary_heap.h binary_heap.cpp
	$(CC) $(CFLAGS) binary_heap.cpp -o binary_heap.o

real_clean:
	rm -f *.exe
	rm -f *.o
