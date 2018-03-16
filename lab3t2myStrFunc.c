#include<stdio.h>
int isPalindrome(char *arr,int size)
{
	int start=0;
	int end=size-1;
	int i=0;
	for(;i<(size/2);i++)
	{
		if(arr[start]!=arr[end])
		{
			return -1;
		}
		start++;
		end--;
	}
	return 1;
}
