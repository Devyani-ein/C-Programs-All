#include<stdio.h>

void addition(int,int);

void main()
{
int x,y;
printf("Enter two numbers:\n");
scanf("%d %d",&x,&y);
addition(x,y);
printf("Thank you");
}

void addition(int a,int b)
{
int c=a+b;
printf("addition of %d and %d is %d\n",a,b,c);
}
