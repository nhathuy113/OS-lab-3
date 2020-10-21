#include <stdio.h>
#include <stdlib.h> // For exit() function

int main() {

	// debug
	// printf("parent process: %d\n", getpid());
	// if (fork()) {
	// 	printf("still parent process: %d\n", getpid());
	// }
	// if (!fork()) {
	// 	printf("child process: %d\n", getpid());
	// }

	
	/* process A */
    if ( fork() ) {
		if ( fork() ) {
			if ( fork() ) {
				printf(" -- A ");
			}
			else {
				/* new process D */
				printf(" -- D ");
			}
		}
		else {
			/* new process C */
			if ( fork() ) {
				printf(" -- C ");
			}
			else {
				/* new process G */
				printf(" -- G ");
		    }
	    }
	}
	else {
		/* new process B */
		if ( fork() ) {
			if ( fork() ) { 
				printf(" -- B ");
			}
			else {
	    		/* new process F */
				printf(" -- F ");
		    }
		}
		else {
			/* new process E */
			if ( fork() ) {
				printf(" -- E ");
			}
			else {
				/* new process I */
				printf(" -- I ");
		    } 
	    }
    }

	//===============================================
	// int inputstream;
	// do { inputstream = getchar(); }
	// while(inputstream != '\n' && inputstream != EOF);
	// printf("\n\nPress ENTER key to Continue ...");
	// getchar();
	return 0;
}