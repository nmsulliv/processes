# Operating Systems Process Lab
Implement a program using Processes.
This program creates two child processes. A total of 3 processes exist after the 
creation (i.e. 1 for the parent process, and 2 child processes).

### Child Process
Both child processes will loop for some random number of iterations, but no more
than 30, while the parent process will wait for both to terminate. Within the
loop, each child should print a message “Child Pid: <pid> is going to sleep!”, 
then call the sleep() function for a random amount of time, but no more than 10 
secs (i.e. use the random()). When the child wakes up, it should print the 
message “Child Pid: is awake!\nWhere is my Parent: <ppid>?”.

### Parent Process
After forking the two child processes, the parent process must call the wait()
  function to wait for both child processes to complete. As each processes 
  completes, the parent should print out the message “Child Pid: <pid> has completed”
  using the wait(&status). Use the man pages to lookup the wait() and its usage.
