#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
FILE *fp=fopen(argv[1], "rb");
int a;
if(fp==NULL)
printf("error");
printf("child process:\n");
while(!feof(fp))
{
fscanf(fp,"%d", &a);
if(!feof(fp))
printf("%d\n",a);
}
return 0;
}
