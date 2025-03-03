#include<stdio.h>
main()
{
	char x;
	printf("Enter any single char.:");
	//scanf("%c",&x); //for input
	x=getchar(); //for input char. only
	
	//printf("\nChar. is:%c",x);
	
	putchar(x);
	
}
