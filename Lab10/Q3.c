#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void myhandler(int signum)
{
	switch(signum)
	{
		case 2:
		printf("\nI got SIGINT:%d\n",signum);
		break;
		case 3:
		printf("\nI got SIGQUIT:%d\n",signum);
		break;
		case 20:
		printf("\nI got SIGTSTP:%d\n",signum);
		break;
		case 9:
		printf("\nI got SIGKILL:%d\n",signum);
		break;
		case 1:
		printf("\nI got SIGHUP:%d\n",signum);
		break;
	}
}

int main()
{
signal(SIGINT,myhandler);
signal(SIGQUIT,myhandler);
signal(SIGTSTP,myhandler);
signal(SIGKILL,myhandler);
signal(SIGHUP,myhandler);
while(1)
{
	printf("I am in an infinite loop.\n");
	sleep(1);
}
return 0;
}
