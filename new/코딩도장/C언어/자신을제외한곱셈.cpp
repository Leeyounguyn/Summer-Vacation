#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int i,j;
	int re;
	int count = 0;
	
	arr = (int *)malloc(sizeof(int )*3);
	printf("Ender를누르면 값이 저장됩니다. : ");	
	do
	{
		scanf("%d", &arr[count]);
		count++;
		if(count>3)
		{
			arr =(int *)realloc(arr, count *sizeof(int));
			arr[count]++;
		}
	}
	while(getc(stdin)==' ');
	
	for(i=0; i<count; i++)
	{
		re = 1;
		
		for(j=0; j<count; j++)
		{
			if(arr[i] == arr[j])
			{
				continue;
			}
			else
			{
				re *= arr[j];
			}
		}
		printf("%d ", re);
		
	}
	return 0;
}
