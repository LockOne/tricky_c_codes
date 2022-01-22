#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>

int main() {

 
  char * argv[1] = {0};	
  char * envp[2] = {"TMP_ENV=123", 0};

  pid_t child_pid = fork();

  if (child_pid == 0) {
    execve("./get_env", argv, envp);
    exit(0);
  } else {
    int child_status;
    pid_t tpid = wait(&child_status);

    printf("child process id : %d, %d\n", child_pid, tpid);

  }

  return 0;

}
