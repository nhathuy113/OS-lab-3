#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int  value = 5;
int  main () {
	pid_t  pid ;
	pid = fork ();
	if (pid == 0) {
		//child  process
		value += 15;
		printf(" => THIS IS CHILD PROCESS, MOTHERFUCKER!!!");
	}
	else if (pid > 0)  { 
		//parent  process
		wait(NULL);
		printf(" => PARENT: value = %d" , value );
	}

	// make console wait for any key pressed before exit
	// int inputstream;
	// do {
	// 	inputstream = getchar();
	// }
	// while(inputstream != '\n' && inputstream != EOF);
    printf("\n.\n.\n.Press ENTER key to Continue ...");
    getchar();
	
	return 0;
}