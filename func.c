#include<stdio.h>
int area_of_rec(int length,int birth)
{
	int area;
	area = length*birth;
	return area;
}
int main()
{
	int l=5,b=10;
	int area = area_of_rec(l,b);
	printf("area=%d",area);
	
}

