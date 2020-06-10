#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main()
{
    pid_t p1;
    p1=fork();
    if(p1==-1)
    {
        perror("fork error");
        return -1;
    }
    if(p1==0)
        printf("child process \n");
    else
        printf("parent process\n");

    return 0;
}
