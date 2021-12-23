#include<stdio.h>
void main()
{
	int x,a,b,c,d;
	scanf("%d",&x);
	a=(x/2000);
	printf("2000 notes=%d",a);
	b=(x%2000)/500;
	printf("\n500 notes=%d",b);
	c=((x%2000)%500)/200;
	printf("\n200 notes=%d",c);
	d=(((x%2000)%500)%200)/100;
	printf("\n100 notes=%d",d);
}
	
