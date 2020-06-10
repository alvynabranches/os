#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p,p1;
int status;
p=fork();
if(p==0)
	execl("/bin/ls", "ls", "-l", NULL);
printf("\nparent process enters wait\n");
p1=wait(&status);
printf("\nCompleted process %ld \n", p1);
return 0;
}
