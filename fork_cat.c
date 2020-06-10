#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
pid_t p,p1;
int status;
argv[0]="cat";
argv[argc+1]="NULL";

p=fork();
if(p==0)
	execv("/bin/cat", argv);
printf("\nparent process enters wait\n");
p1=wait(&status);
//printf("\nCompleted process %ld \n", p1);
return 0;
}
