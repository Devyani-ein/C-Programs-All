#include<stdio.h> 
void main() 
{ 
int n; 
printf("enter size of array:\n");
scanf("%d",&n);
int a[n];
int i;
printf("Enter elements:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("array is:");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
int sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("Sum of elements are=%d\n",sum);
int min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("minimum of all elements:%d\n",min);
int max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("maximum of all elements:%d\n",max);
//length of array
int counter=0;
for(i=0;i<n;i++)
{
counter++;
}
printf("length of array:%d\n",counter);
//average
float avg=0.0;
avg=(float)sum/(float)counter;
printf("average is %f\n",avg);
}




