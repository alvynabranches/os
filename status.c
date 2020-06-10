#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
void child(int n);
int main()
{
pid_t p1;
int status;
printf("Process id %ld\n", getpid());
p1=fork();
if(p1==0)
child(5);

printf("\nparent process enters wait\n");
p1=wait(&status);
if(WIFEXITED(status))
printf("\nprocess terminated successfully %ld\n", p1);
else if(WIFSIGNALED(status))
printf("\nprocess terminated abnormally, signaled %ld\n", p1);

return 0;
}
void child(int n)
{
int i,x=0;
for (i=0;i<n;i++){
printf("\t%d", i);
//printf("\t%d", i/x);
}
}
