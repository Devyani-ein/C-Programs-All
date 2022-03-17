#include<stdio.h>

void main()
{
FILE *fp1,*fp2;
char a,b;
int flag=0;
fp1=fopen("file1.txt","r");
fp2=fopen("file2.txt","r");
while(!feof(fp1))
{
a=getc(fp1);
b=getc(fp2);
if(a!=b)
{
break;
flag=1;
}
char c;
c=getc(fp2);
if(flag==0)
{
printf("equal\n");
}
else
{
printf("not equal\n");
}
}
}
