#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    pid_t cpid, w;
    int status;
    cpid = fork();
    if (cpid == -1) { perror("fork"); exit(EXIT_FAILURE); }

    if (cpid == 0) {            /* Code executed by child */
        printf("Child PID is %ld\n", getpid());
        
    } else {                    /* Code executed by parent */
		
            w = waitpid(cpid, &status, WNOHANG);
		printf("parent process\nchild enters wait\n");
            if (w == -1) { perror("waitpid"); exit(EXIT_FAILURE); }
		
            if (WIFEXITED(status)) {
                printf("exited, status=%d\n", WEXITSTATUS(status));
            }
        exit(EXIT_SUCCESS);
    }
}
