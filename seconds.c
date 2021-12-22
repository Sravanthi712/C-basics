#include<stdio.h>
void main()
{
int sec,hr,min ;
scanf("%d%d%d",&hr,&min,&sec);
hr=sec/3600;
printf("%d hr",hr);
min=sec%60;
printf("%d min",min);
sec=sec-3600;
printf("%d sec",sec);
}
