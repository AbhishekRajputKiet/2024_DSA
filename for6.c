#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(n=0;n<=10;n++)
{
		
	if (n%2!=0)
	{
		printf("num is prime",n);
	}
	else
	{
		printf("num is not prime");
	}
}
return 0;
}
