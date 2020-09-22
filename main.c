#include  <stdio.h>
#include  <stdlib.h>
#include  <sys/types.h>
#include  <time.h> 

#define   MAX_COUNT  200

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

void  main(void) {
  pid_t  pid1, pid2;

  pid1 = fork();

  if (pid1 == 0) {
    ChildProcess();
  } else {
    pid2 = fork();
      if (pid2 == 0) {
        ChildProcess();
      } else {
         int child1 = wait(&pid1);
         printf("Child Pid: %d has completed.\n", child1);
         int child2 = wait(&pid2);
         printf("Child Pid: %d has completed.\n", child2);
      }
  } 
}

void  ChildProcess(void) {
  int i;
  srand(time(0));
  int randomNum = (rand() % 30);

   for (i = 1; i <= randomNum; i++) {
     int randomTime = (rand() % 10);
     pid_t child = getpid();
     pid_t parent = getppid();

     printf("Child Pid: %d is going to sleep!\n", child);  
     sleep(randomTime);
     printf(" Child Pid: %d is awake!\n Where is my Parent: %d?\n", child, parent);
   }
  exit(0);
}

void  ParentProcess(void) {
//    int child1 = waitpid(-1, &status, 0);
//    printf("Child Pid: %d has completed.\n", child1);
//    int child2 = waitpid(-1, &status, 0);
//    printf("Child Pid: %d has completed.\n", child2);
}
