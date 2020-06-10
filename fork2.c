#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p1;
p1=fork();
if(p1<0)
printf("fork error\n");
if(p1>0)
printf("\nparent process\n");
else
{
printf("\nchild process C1\n");
printf("creating another child process in C1\n");
p1=fork();
if(p1<0)
printf("fork error\n");
if(p1>0)
printf("\nProcess C1\n");
else
printf("New child C2\n");
}
return 0;
}
