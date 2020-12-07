#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("\nnumber is not prime");
			break;
		}
	}
	if(i==num)
	{
		printf(" prime num ");

	}
	return 0;

}