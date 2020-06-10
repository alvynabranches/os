#include <stdio.h>
#include <unistd.h>

int main()
{
char *str;
str=getlogin();
printf("Login name: %s\n", str);
return 0;
}
