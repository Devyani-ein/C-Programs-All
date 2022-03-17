#include<stdio.h>
int login();
void checkbalance(int);
void withdraw(int);
void deposit(int);
void main()
{
while(pin !=1546)
{
	printf("Enter Your PIN:");
	scanf("%d",&pin);
	if(pin!=1546)
	printf("Incorrect PIN.Cannot Login\n");
	printf("2 more time try again\n");
	if(attempts>2)
	printf("CARD BLOCKED!\n");


}
do
{
printf("What you want to do?\n enter 1 for checkbalance\n enter 2 for cash withdraw\n enter 3 for cash deposite\n enter 4 for quite\n");
scanf("%d",&op);
switch(op)
	{
	case 1:
	checkbalance(u);
	break;

	case 2:
	withdraw(u);
	break;
	
	case 3:
	deposit(u);
	break;
	
	case 4:
	printf("Thanks for visiting\n");
	break;

	default:
	printf("Invalid input\n");
	}
}while(op!=4);
}


}
}


