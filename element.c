#include<stdio.h>
int main()
{
int a[100];
int i,n,even,odd;
//input size 
printf("Enter size: ");
scanf("%d",&n);
//input elements
printf("Enter %d elements in array: ",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
even=0;
odd=0;

for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
even++;
}
{
odd++;
}
}
printf("Even: %d\n",even);
printf("odd: %d\n",odd);

return 0;
}
