#include<stdio.h>
main()
{
	int a,b;
	char choice;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	printf("\n+:Add");
	printf("\n-:Sub");
	printf("\n*:Mul");
	printf("\n/:Div");
	printf("\nSelect your choice for oper.::");
	scanf(" %c",&choice);
	
	if(choice=='+')
	{
		printf("\nSum:%d",a+b);
	}
	else if(choice=='-')
	{
		printf("\nSub:%d",a-b);
	}
	else if(choice=='*')
	{
		printf("\nMul:%d",a*b);
	}
	else if(choice=='/')
	{
		printf("\nDiv:%d",a/b);
	}
	else
	{
		printf("\nError!Invalid choice...");
	}
	
}
