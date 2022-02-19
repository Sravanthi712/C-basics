#include<stdio.h>
void main()
{
	int n,a,sum=0,r;
	scanf("%d",&n);
	a=n*n;//81
	while(a>0)
	{
		r=a%10;//1//
		sum=sum+r;//0+1
		a=a/10;//8
	}
	if(sum==n)
	{
		printf("%d is a nenon number",n);
	}
	else
	{
		printf("not neon number");
	}
}
