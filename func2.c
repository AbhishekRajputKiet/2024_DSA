#include<stdio.h>
int patern_star(int n)
{
	int patern;
	patern='a';
	return patern;
}
int main()
{
	int i,j,r,n;
	printf("value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			int patern=patern_star('a');
			printf("%d ",patern);	
		}
		printf("\n");
			
	}	
}



