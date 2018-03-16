#include<stdio.h>
#include"myStr.h"
int main()
{
	char arr[4]="adid";
	if(isPalindrome(arr,4)==1)
	{
		printf("Palindrome\n");	
	}
	else
	{
		printf("Not PAlindrome\n");
	}
return 0;
}
