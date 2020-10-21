# when using header, you dont have to recompile hello.c again
#lab2_main.o: main/main.c readline/readline.h factorial/factorial.h 
#	gcc -c main/main.c

#global ↓
clean: object_file_go_boom

object_file_go_boom:
	rm -f *.o
#global ↑

# 6_1 ↓
6_1.o:
	gcc -c 6_1.c

6_1: 6_1.o
	gcc 6_1.o -o 6_1

6_1_run: 6_1
	./6_1
# 6_1 ↑

# 6_2 ↓
ex1.o: ex1.c
	gcc -c ex1.c

ex1: ex1.o 
	gcc ex1.o -o ex1

ex1_run: ex1
	./ex1

ex2.o: ex2.c
	gcc -c ex2.c

ex2: ex2.o 
	gcc ex2.o -o ex2

ex2_run: ex2
	./ex2
# 6_2 ↑