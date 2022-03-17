2 FEB 
program1

#include<stdio.h>
#include<conio.h>

struct book
{
int pages;
char title;
float price;
}s1;
union student
{
int sid;
char name[20];
float cpi;
}u1;


void main()
{
s1.pages=150;
s1.price=190.0;
printf("%d\n%f",s1.pages,s1.price);
printf("Enter value: ");
scanf("%d\n%s\n%f",&u1.sid,u1.name,&u1.cpi);
printf("%d\n%s\n%f",u1.sid,u1.name,u1.cpi);
}


program 2
#include<stdio.h>
void main()
{
FILE *fp;
char str[50];
fp=fopen("hello.txt","w");
fprintf(fp,"hello how are you?\n");
printf("file comment is%s\n",str);
fclose(fp);
}

program 2
#include<stdio.h>
void main()
{
FILE *fp;
char c;
fp=fopen("hello.txt","r");
while(!feof(fp))
{
c=getc(fp);
printf("%c",c);
}
fclose(fp);
}









