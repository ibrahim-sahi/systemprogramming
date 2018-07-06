#include<signal.h>
#include<stdio.h>
#include<unistd.h>

void sigint(int signum)
{
	printf("child:I got a SIGINT from parent:%d\n",signum);
}

int main()
{
	pid_t cpid=fork();
	if(cpid==0)
	{
		signal(SIGINT,sigint);
		for(;;)sleep(1);
	}
	else
	{
		sleep(2);
		printf("I am parent,sending SIGINT to my child\n");
		kill(cpid,SIGINT);
	}
	return 0;
}
