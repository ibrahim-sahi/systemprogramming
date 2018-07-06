#include<stdio.h>
#include<signal.h>
#include<unistd.h>
int main()
{
	signal(SIGINT,SIG_IGN);
	signal(SIGFPE,SIG_IGN);
	signal(SIGQUIT,SIG_IGN);
	signal(SIGSTOP,SIG_IGN);
	signal(SIGHUP,SIG_IGN);
	while(1)
	{	
		printf("I am an infinite loop.\n");
		sleep(2);	

	}
	return 0;
}
