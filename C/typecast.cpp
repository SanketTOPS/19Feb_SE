#include<stdio.h>
main()
{
	int a=23,b=56;
	float c;
	printf("\nAdd:%d",a+b);
	printf("\nSub:%d",a-b);
	printf("\nMul:%d",a*b);
	c=float(a)/float(b); //type-casting
	printf("\nDiv:%f",c);
}
