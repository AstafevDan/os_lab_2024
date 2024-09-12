task1:
	gcc -o swap ./src/swap/main.c ./src/swap/swap.c
	./swap

task2:
	gcc -o revert_program ./src/revert_string/main.c ./src/revert_string/revert_string.c
	./revert_program programmer
	
task3:
	gcc -c ./src/revert_string/main.c -o bin/main.o

	gcc -c ./src/revert_string/revert_string.c -o bin/static/revert_string.o
	gcc -c -fPIC ./src/revert_string/revert_string.c -o bin/shared/revert_string.o

	ar rcs ./bin/static/librevert.a bin/static/revert_string.o
	gcc ./bin/main.o -Lbin/static -lrevert -o bin/statically-linked

	gcc -shared ./bin/shared/revert_string.o -o bin/shared/librevert.so
	gcc ./bin/main.o -Lbin/shared -lrevert -o bin/use-shared-library

task4:
	gcc -o tests ./src/tests/tests.c -L./bin/shared -lrevert -lcunit -I./src/revert_string