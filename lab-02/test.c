#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	
	int PScheduler(void);

	printf(1, "\n This program tests the correctness of Lab #2\n");

	PScheduler();

	return 0;
}
      
int PScheduler(void){
		 
	// use this part to test the priority scheduler. Assuming that the priorities range between range between 0 to 31
	// 0 is the highest priority and 31 is the lowest priority.  

	int pid;
  	int i, j, k;

    printf(1, "\n  Testing the priority scheduler and setpriority(int priority)) system call:\n");
    printf(1, "    - Assuming that the priorities range between range between 0 to 31\n");
    printf(1, "    - 0 is the highest priority. All processes have a default priority of 10\n");
    printf(1, "    - The parent processes will switch to priority 0\n");
  
    setpriority(0);

	for (i = 0; i < 3; i++) {
		pid = fork();
		if (pid > 0) {
			continue;
		}
		else if (pid == 0) {
			setpriority(30-10*i);
			for (j = 0; j < 20000; j++) {
				for (k = 0; k < 1000; k++) {
					asm("nop"); 
				}
			}
			
			printf(1, "\n\tFINISHED child #%d with priority %d!\n", getpid(), getpriority());	
			break;
		}
	}

	if (pid > 0) {
		for (i = 0; i < 3; i++) {
			wait();
		}
		printf(1,"\n If processes with highest priority finished first, then it's correct!\n");
	}
	
	exit();		
	return 0;
}