#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p;
int status, i, n;
char buf[20];
printf("\nenter the value for n: ");
scanf("%d", &n);
for (i=0;i<n;i++)
scanf("%d",&n);
printf("%s", buf);

/*p=fork();
if(p==0)
//execv("./disp_file.exe", arg);
//execl("./disp_file.exe", "./disp_file.exe", "f.txt", (char *)"\0");
execlp("disp_file.c", "./disp_file.exe", "f.txt", (char *)"\0");
printf("\nparent process enters wait\n");
p=wait(&status);
printf("\nCompleted process %ld \n", p);*/

return 0;
}
