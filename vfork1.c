#include<stdio.h>
#include<unistd.h>

int glob = 6; 
int main()
{
int var; 
pid_t pid;
var = 88;
printf("before vfork\n");
printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);

if ((pid = vfork()) < 0) 
{
printf("vfork error");
} else if (pid == 0) { /* child */
printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);
glob++; /* modify parent's variables */
var++;
_exit(0); /* child terminates */
}
/*
* Parent continues here.
*/
printf("after vfork\n");
printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);
exit(0);
}
