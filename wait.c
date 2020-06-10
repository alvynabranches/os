#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
pid_t p1;
int status;
printf("parent process id %ld\n", getpid());
p1=fork();
if(p1<0){
perror("fork error"); exit(0);}
else if(p1==0)
{
printf("child process id %ld\n", getpid());
}
else{
printf("parent process enters wait\n");
p1=wait(&status);
printf("Completed parent process & pid is %ld", getpid());
}
return 0;
}
