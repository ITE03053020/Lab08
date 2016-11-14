#include<stdio.h>
#include<stdlib.h>

int main()
{

	int pid , status = 0;
	int n;

	for(n=0 ; n<3 ; n++)
	{
		pid = fork();
		if(pid != 0)
		{
		/*father*/
		printf("I am father , child's pid is %d\n",pid);
		pid = wait(&status);
		}
		else
		{
		/*child*/
		printf("I am child , father's pid is %d\nchild's pid is %d\n",getppid(),getpid());
		exit(status);
		}
	}
}

