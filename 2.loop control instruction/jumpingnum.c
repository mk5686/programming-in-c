#include<stdio.h>
int main()
{
	int i,fd,temp,x,ld;
	printf("enter the any number ");
	scanf("%d",&x);
	for (i=0;i<=x;i++)
	{
		if(i<=10)
		{
			printf(" %d",i);

		}
		else
		{
			temp=i;
			ld=temp%10;
			while(temp!=0)
			{
				fd=temp%10;
				temp=temp/10;
			}
			if((ld-fd==-1)||(ld-fd==1))
				printf(" %d",i);
		}
	}
	return 0;
}