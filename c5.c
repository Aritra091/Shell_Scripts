#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  int pid = 0;
  pid = fork();
  if (pid == 0)
  {
    sleep(1);
    printf("\nI am child");
    printf("\nChild PID: %d",getpid());
    printf("\nParent PID: %d",getppid());
  }
  else
  {
    system("ps -af");
    printf("\nI am parent");
    printf("\nChild PID: %d",pid);
    getpid();
    printf("\nParent PID: %d",getpid());
    sleep(2);
    system("ps -af");
  }
  
  return 0;
}
