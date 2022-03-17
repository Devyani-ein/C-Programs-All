#include<stdio.h>

float simpleI(float,float,float);

int main()
{
float p,r,t;
printf("Enter the principal,Rate of Interest,Time:\n");
scanf("%f%f%f",&p,&r,&t);
float si=simpleI(p,r,t);
printf("SI:%f\n",si);
}
float simpleI(float a,float b,float c)
{
return(a*b*c)/100;
}
