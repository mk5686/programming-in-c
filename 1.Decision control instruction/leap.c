#include<stdio.h>

int main()
{
	int year ;
	printf("Enter the year:");
	scanf("%d",&year);

	if(year%4==0)
	{
		if(year%100==0)
		{
			printf("you entered year is leap year");

			if(year%400==0)

				printf("you entered year is leap year");
			else

				printf("entered year is not leap year");
		}
		else
			printf("entered year is leap year");
		
	}
	else
		printf("entered year is not leap year");

}
