#include<stdio.h>
main()
{
	char ch;
	printf("Enter any char.:");
	//scanf("%c",&ch); //input
	ch= getchar(); //input only char.
	//printf("\nChar. is:%c",ch);
	putchar(ch); //output only char.
}
