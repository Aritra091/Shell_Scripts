#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  int pid = 0;
  pid = fork();
  if (pid == 0)
  {
    printf("I am child\n");
  }
  else
  {
    printf("I am parent\n");
  }
  
  return 0;
}
