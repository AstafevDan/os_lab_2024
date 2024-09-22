CC=gcc
CFLAGS=-I.
THFLAGS=-pthread -lsum -L.
UTPATH=../../lab3/src/

all : find_min_max.o utils.o parallel_min_max zombie process_memory sum

zombie : 
	$(CC) -o zombie zombie.c

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

process_memory : 
	$(CC) -o process_memory process_memory.c 

utils2.o : ../../lab3/src/utils.h
	$(CC) -o utils2.o -c $(UTPATH)utils.c $(CFLAGS)

sum: libsum utils2.o utils.h sum_array.h 
	$(CC) -o sum utils2.o parallel_sum.c $(CFLAGS) $(THFLAGS)

libsum: sum.o
	$(CC) -shared sum.o -o libsum.so $(CFLAGS)

sum.o: sum_array.c sum_array.h 
	$(CC) -c sum_array.c -o sum.o -fPIC $(CFLAGS)

clean :
	rm utils.o find_min_max.o parallel_min_max zombie process_memory utils2.o sum sum.o libsum.so