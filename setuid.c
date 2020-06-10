#include <stdio.h>
#include <unistd.h>

int main()
{

printf("real user id = %ld\n effective user id = %ld ", getuid(), geteuid());
//printf("real group id = %ld\n effective group id = %ld ", getgid(), getegid());
setreuid(1001,1001);
printf("\nreal user id = %ld\n effective user id = %ld ", getuid(), geteuid());
return 0;
}
