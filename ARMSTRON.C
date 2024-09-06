#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,t,temp=0;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
t=n%10;
sum=sum+(t*t*t);
n=n/10;
}
if(temp==sum)
printf("the number is armstrong number!");
else
printf("the number is not armstrong number!");
getch();
}