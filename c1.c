#include <stdio.h>
int main()
{
int n,i,s;
printf("\nChild process 1\n");
printf("\nenter the value for n: ");
scanf("%d", &n);
for (i=0;i<n;i++)
{
s=s+i;
printf("%d\t",i);
}
exit(s);
}
