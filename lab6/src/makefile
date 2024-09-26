CC = gcc
CFLAGS = -I. -lpthread -Wall -Werror -Wextra

LIB = mult_modulo.o

all: client server

client: client.o $(LIB)
    $(CC) -o client client.o $(LIB) $(CFLAGS)

server: server.o $(LIB)
    $(CC) -o server server.o $(LIB) $(CFLAGS)

mult_modulo.o: mult_modulo.c mult_modulo.h
	$(CC) -c mult_modulo.c $(CFLAGS)

client.o: client.c mult_modulo.h
	$(CC) -c client.c $(CFLAGS)

server.o: server.c mult_modulo.h
	$(CC) -c server.c $(CFLAGS)

clean:
	rm *.o client server