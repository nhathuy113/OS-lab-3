# when using header, you dont have to recompile hello.c again
#lab2_main.o: main/main.c readline/readline.h factorial/factorial.h 
#	gcc -c main/main.c

#global ↓
clean: object_file_go_boom

object_file_go_boom:
	rm -f *.o
#global ↑

# question_1 factorial ↓
6_1.o:
	gcc -c 6_1.c

6_1: 6_1.o
	gcc 6_1.o -o 6_1

6_1_run: 6_1
	./6_1.exe
	make clean
# question_1 factorial ↑