#include <stdio.h>
int main(int argc, char *argv[])
{
int m,i;
/*printf("\nChild process 2\n");
printf("\nenter the value for m: ");
scanf("%d", &m);*/
m=atoi(argv[1]);
for (i=0;i<m;i++)
printf("\t%d",i*m);
}
