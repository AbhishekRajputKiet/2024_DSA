#include<stdio.h>
int sum_of_mn(int n,int m)
{
	int sum,i;
	sum=n+m;
	return sum;
}


int main()
{
	int n,m;
	printf("scane two number:");
	scanf("%d %d",&n,&m);
	int sum=sum_of_mn(n,m);
	printf("%d",sum);
	
}




