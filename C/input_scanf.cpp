#include<stdio.h>
main()
{
	char name[20],dob[20],address[100];
	int age;
	printf("Enter your Name:");
	scanf("%s",&name);
	printf("Enter your DOB:");
	scanf("%s",&dob);
	printf("Enter your Address:");
	scanf("%s",&address);
	printf("Enter your Age:");
	scanf("%d",&age);
	
	printf("\nName:%s",name);
	printf("\nDOB:%s",dob);
	printf("\nAddress:%s",address);
	printf("\nAge:%d",age);
}
