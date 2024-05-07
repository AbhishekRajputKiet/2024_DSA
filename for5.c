#include<stdio.h>
int main()
{
	int j,n,i,min;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			min = i<j ?i:j;
			printf("%d ",n-min+1);
		}
		for(j=n-1;j>=1;j--)
		{
			min = i<j ?i:j;
			printf("%d ",n-min+1);
		}
			//if(i==1 || i==(2*n)-1 ||j==1 || j==(2*n)-1)			
			//		printf("%d ",n);	
//			else
//			{				
//					printf("%d ",n-1);
					
//			}	
		printf("\n");		
	}
	printf("\n");
	return 0;
}
