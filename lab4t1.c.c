#include<stdlib.h>
#include<stdio.h>
int main()
{
	int size=10;
	int *arr=(int*)malloc(sizeof(int)* size);
	int i=0;

	for(;i<size;i++)
	{
		arr[i]=i;
	}

	i=0;
	for(;i<size;i++)
	{
		printf("Element of array : %d\n",arr[i]);
	}
	

	int *nptr=(int*)realloc(arr,size*2);
	if(nptr==NULL)
	{
		printf("Error Ocured : \n");
		//exit();
	}
	else
	{
		arr=nptr;
		int j=0;
	for(;j<size*2;j++)
	{
		arr[j]=j;
	}
	printf("\nAfter increase size : \n");
	j=0;
	for(;j<size*2;j++)
	{
		printf("Element of array : %d\n",arr[j]);
	}
	}

return 0;
}
