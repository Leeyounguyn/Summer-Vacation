#include<stdio.h>

int main()
{
	int arr[10] = {0, }; 
	int i,j;
	
	for(i=1; i<=1000; i++)
	{
		j = i;
	    
		while(j>0)
		{
			arr[j%10]++;
			j = j/10;
		}
	}

	for(i=0; i<10; i++)
	{
		printf("%d  ", arr[i]);
	}
}
