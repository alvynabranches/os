#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p;
int status, i, n;
char *arg[3];
arg[0]="./disp_file.exe";
arg[1]="f.txt";
arg[2]=NULL;
p=fork();

if(p==0)
execv("./disp_file.exe", arg);
//execl("./disp_file.exe", "./disp_file.exe", "f.txt", (char *)"\0");
printf("\nparent process enters wait\n");
p=wait(&status);
printf("\nCompleted process %ld \n", p);

return 0;
}
