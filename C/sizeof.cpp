#include<stdio.h>
main()
{
	int a=12;
	long int b=454564564;
	float c=45.23;
	double d=45656.12515;
	long double e=87545646846.2154564;
	char f='w';
	char str[10]="TOPSTechn";
	printf("\nSize of INT:%d",sizeof(a));
	printf("\nSize of Long INT:%d",sizeof(b));
	printf("\nSize of Float:%d",sizeof(c));
	printf("\nSize of Double:%d",sizeof(d));
	printf("\nSize of Long Double:%d",sizeof(e));
	printf("\nSize of Char.:%d",sizeof(f));
	printf("\nSize of String:%d",sizeof(str));
}
