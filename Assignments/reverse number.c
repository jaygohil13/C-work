#include<stdio.h>

void main()
{
	int n,remainder,reverse=0;
	printf("enter a number:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	printf("reverse number:%d",reverse);
}