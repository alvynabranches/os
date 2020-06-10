#include <stdio.h>
#include <unistd.h>

int main()
{
uid_t u;
u=getuid();
printf("Before calling setuid() User id = %ld\n", u);
setuid(1002);
u=getuid();
printf("After calling setuid() User id = %ld\n", u);

return 0;
}
