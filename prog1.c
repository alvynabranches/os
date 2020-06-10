#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <sys/wait.h>
#include <errno.h>
int sum=0;
int main()
{
pid_t p;
int sum, i, n;
p=fork();
if(p==0)
execl("./child.exe", "./child.exe", "15" , (char *)"\0");
printf("\nparent process enters wait\n");
p=wait(&sum);
printf("\nCompleted process %ld \n", p);
	printf("sum=%d", sum);

return 0;
}
