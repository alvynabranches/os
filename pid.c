#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p1,p2;

p1=getpid();
p2=getppid();
printf("Process id = %ld\nParent process id = %ld\n", p1,p2);
printf("user id = %ld\ngroup id = %ld\n", getuid(),getgid());
return 0;
}
