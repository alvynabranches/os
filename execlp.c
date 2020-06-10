#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t p;

p=fork();
if(p==0){
//execl("/bin/ls", "ls", NULL);
execlp("ls", "ls", "-l");
}
return 0;
}
