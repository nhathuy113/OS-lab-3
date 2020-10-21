#include <stdio.h>
#include <stdlib.h> // For exit() function

int main() {

	// child process task
	int task[2] = {2,3};
	int result = 0;
	int child_task;

	for (int kid = 0; kid < sizeof(task)/sizeof(int); kid++) {
	    int pid = fork();
	    if (pid > 0) {
	    	/* Main process */
	    } 
	    else {
	        /* Child process */
	    	// receive task
	    	child_task = task[kid];

			// open file
	    	FILE *fp = fopen("numbers.txt", "r");

	    	// read
	    	char line[128];
	    	while(fgets(line, sizeof(line), fp) != NULL) {
				//printf("   DEBUG: %s\n", line);
				// counting
				if ( atoi(line) % child_task == 0 ) {
					result++; 
				}
			}

			// close file
			fclose(fp);

			// return
			printf("%d\n", result);

			// stop child process
			exit(0);
	    }
	}
	




	//===============================================
	// // int inputstream;
	// // do { inputstream = getchar(); }
	// // while(inputstream != '\n' && inputstream != EOF);
	// printf("\n\nPress ENTER key to Continue ...");
	// getchar();
	return 0;
}