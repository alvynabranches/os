#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
pid_t p,p1;
int status,n;
p=fork();
if(p==0)
	execl("./c1.exe", NULL);
else
{
p1=waitpid(p, &status,0);
if(WIFEXITED(status))
{
n=WEXITSTATUS(status);
printf("\nsum %ld ", n);
}
}
return 0;
}
