#include<stdio.h>
int isEqual(int x,int y)
{
	if(x==y)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int swap(int x , int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After Swap value of x is : %d \n",x);
	printf("After Swap value of y is : %d \n",y);
}

