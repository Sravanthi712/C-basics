#include<stdio.h>
void main()
{
	inc();
	inc();
	inc();
}
inc()
{
static int a=10;
a=a+1;
printf("%d ",a);
}
