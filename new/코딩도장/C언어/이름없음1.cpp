#include<stdio.h>

int main()
{
	int arr[] = {12, 17, 19, 17, 23};
	int len = sizeof(arr)/sizeof(int);
	int i;
	int j;
	
	for(i=0; i<len; i++)
	{
		printf("%d  / ", arr[i]);
		for(j=i+1; j<len; j++)
		{
			printf(" %d  ", arr[j]);
		}
		printf("\n");
	}
}
