#include <stdio.h>
#include <unistd.h>
#include<sys/times.h>

int main()
{
struct tms t;
clock_t ct;
int i,sum,status,tps;
tps=sysconf(_SC_CLK_TCK); //number of clock tics per sec
ct=times(&t);
printf("\nexecution started at  : %f\n", ((double) ct)/tps);
for(i=0;i<1000000000;i++)
		sum+=i; 
if(fork()==0)
{
	for(i=0;i<1000000000;i++)
		sum+=i;
}
else{
wait(&status);
ct=times(&t);
printf("\nExecution ended at : %f", ((double) ct)/tps);
printf("\nFor parent process\ntms_utime: %f", ((double) t.tms_utime)/tps);
printf("\ntms_stime : %f", ((double) t.tms_stime)/tps);
printf("\nFor child process\ntms_cutime : %f", (double) t.tms_cutime/tps);
printf("\ntms_cstime : %f", (double) t.tms_cstime/tps);
}
return 0;
}
