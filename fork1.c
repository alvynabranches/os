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
printf("\nchild process\n");
return 0;
}
