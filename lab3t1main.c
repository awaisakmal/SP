#include<stdio.h>
#include"myMath.h"
int main()
{
	int x;
	int y;
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Enter value of y: ");
	scanf("%d",&y);
	if(isEqual(x,y)==1)
	{
		printf("Equal\n");	
	}
	else
	{
		printf("Not Equal\n");
	}
	
	swap(x,y);
		
return 0;
}
