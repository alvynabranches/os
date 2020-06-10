#include <stdio.h>
int main(int argc, char* argv[])
{
int n,i,sum;
printf("\nChild process \n");
n=atoi(argv[1]);
for (i=1;i<=n;i++)
	sum+=i;
printf("sum = %d", sum);
return (sum);
}
