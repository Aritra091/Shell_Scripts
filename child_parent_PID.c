#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  int pid = 0;
  pid = fork();
  if (pid == 0)
  {
    printf("\nI am child");
    printf("\nChild PID: %d",getpid());
    printf("\nParent PID: %d",getppid());
  }
  else
  {
    printf("\nI am parent");
    printf("\nChild PID: %d",pid);
    getpid();
    printf("\nParent PID: %d",getpid());
  }
  
  return 0;
}
