#include<stdio.h>
#include<math.h>
int main ()
{
	int n,s;
	printf("n=");
	scanf("%d",&n);
	while(n>=0)
	{
		n=n%10;
		s=s+n;
		n++;
		n=n/10;
		
	}
	printf("%d",s);	
	return 0;
}



