#include<stdio.h>
extern int y=30;
void main()
{
 int x=20;
printf("%d %d",x,y);
inc();
}
inc()
{
printf("%d ",y);
}
