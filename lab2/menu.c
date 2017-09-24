
#include<stdio.h>
#include<stdlib.h>
char cmd[128];
int main()
{

	printf("Please enter the command:\n");
	
	while(1)
	{
		scanf("%s", cmd);
		if(strcmp("help", cmd) == 0)
		{
			printf("You can enter:\n");
			printf("1.calculate\n");
			printf("2.quit\n");
		}
		else if(strcmp("calculate", cmd) == 0)
		{
			calculator();
		}
		else if(strcmp("quit", cmd) == 0)
		{
			exit(0);
		}
		else
		{
			printf("Please enter again");
		}
		
	}
}
int calculator()
{
	int a,b,c,n;
	printf("You can enter number: 1.addition2.subtraction3.multiplication4.division5.quit\n");
	while(1)
	{
		scanf("%d", &n);
		if(n == 1)
		{
	    	scanf("%d,%d", &a,&b);
			c = a+b;
			printf("%d + %d = %d", a, b, c);
		}
		else if(n == 2)
		{
			scanf("%d,%d", &a,&b);
			c = a-b;
			printf("%d - %d = %d", a, b, c);
		}
		else if(n == 3)
		{
			scanf("%d,%d", &a,&b);
			c = a*b;
			printf("%d * %d = %d", a, b, c);
		}
		else if(n == 4)
		{
			scanf("%d,%d", &a,&b);
			c = a/b;
			printf("%d / %d = %d", a, b, c);
		}
		else if(n == 5)
		{
			exit(0);
		}
		else
		{
			printf("Please enter again:\n");
			
		}
	}
}
     
