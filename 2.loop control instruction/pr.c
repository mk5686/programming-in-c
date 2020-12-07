#include<stdio.h>
int main()
{
	int num ,i,count,j;
	printf("Enter the number");
	scanf("%d",&num);
	for(j=1;j<=num;j++)
	{
		for (i=2;i<j;i++)
		{
			count=0;
			if(j%i==0){
				count++;
				break;
			}

		

		
		}
	  	if(count==0)
			printf("\n %d",j);
	}
	return 0;
}