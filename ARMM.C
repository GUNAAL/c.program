#include<stdio.h>
int main(
{
int a,b,c,sum,cube;
printf("enter the number");
scanf("%d%d",&sum,&cube);
sum=a*100+b*10+c*1;
cube=a*a*a+b*b*b+c*c*c;
if(sum==cube)
printf("yes");
else
printf("no");
return 0;
}
