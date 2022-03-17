#include<stdio.h>
void main()
{
FILE *fp,*fp1;
char c;
fp=fopen("hello.txt","r");
fp1=fopen("hello1.txt","w");
while(!feof(fp))
{
c=getc(fp);
putc(c,fp);
}
fclose(fp);
}
