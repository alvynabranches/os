#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p,p1;
int status,m;
char *para;
p=fork();
if(p==0)
	execl("./c1.exe", NULL);
printf("\nparent process enters wait\n");
p1=wait(&status);
printf("\nCompleted process %ld \n", p1);

p=fork();
if(p==0)
{
	printf("enter the value for m :");
	scanf("%d", &m);
	sprintf(para, "%d", m);
	execl("./c2.exe", "./c2.exe", para, NULL);
}
printf("\nAgain parent process enters wait\n");
p1=wait(&status);
printf("\nCompleted process %ld \n", getpid());

return 0;
}
