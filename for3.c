#include<stdio.h>
#include<math.h>
int main()
{
	// entered number prime or not.
	int flag=0,i,n;
	printf("value of n:");
	scanf("%d",&n);
	if(n==0 || n==1)
	{
		flag = 1;
	}
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
			flag=0;	
	}
	if(flag==0)
		printf("Prime.");
	else
		printf("not Prime.");	
	return 0;	  
}


