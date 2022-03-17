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
