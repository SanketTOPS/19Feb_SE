#include<stdio.h>
main()
{
	int a,b, choice;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	printf("\n+:Add");
	printf("\n-:Sub");
	printf("\n*:Mul");
	printf("\n/:Div");
	printf("\nSelect your choice for oper.::");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nSum:%d",a+b);
	}
	else if(choice==2)
	{
		printf("\nSub:%d",a-b);
	}
	else if(choice==3)
	{
		printf("\nMul:%d",a*b);
	}
	else if(choice==4)
	{
		printf("\nDiv:%d",a/b);
	}
	else
	{
		printf("\nError!Invalid choice...");
	}
	
}
