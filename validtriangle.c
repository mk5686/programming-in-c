/*if the three side of triangle enter through the keybord write a program to check 
whether the triangle is valid of not .The triangle is valid if the sum of two side is
greater the largest of three sides */

#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the side of Triangle");
	scanf("%d%d%d",&s1,&s2,&s3);

	if(( s2+s3 > s1 ) || ( s3+s1 > s2 ) || ( s1+s2 > s3 ))
	{
		printf("It is a valid Triangle");

	}
	else
	{
		printf("it is not triangle");
	}
}