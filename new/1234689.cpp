#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sum = 0, count=0;
	int i;
	int num = 523227;
	int *arr= NULL;
	int arr2[10] = {0, };
	
	for(i=10; i<16; i++)
	{
	  
		while(num>0)
		{
			arr = (int *)malloc(sizeof(int));
			
			sum += num%10;
			arr[count] = num%10;
			if(arr[count]== 0)
			{
				arr2[0]++;
			}
			else if(arr[count]== 1)
			{
				arr2[1]++;
			}
			else if(arr[count]==2)
			{
				arr2[2]++;
			}
			else if(arr[count]==3)
			{
				arr2[3]++;
			}
			else if(arr[count]== 4)
			{
				arr2[4]++;
			}
			else if(arr[count]==5)
			{
				arr2[5]++;
			}
			else if(arr[count]==6)
			{
				arr2[6]++;
			}
			else if(arr[count]== 7)
			{
				arr2[7]++;
			}
			else if(arr[count]==8)
			{
				arr2[8]++;
			}
			else if(arr[count]==9)
			{
				arr2[9]++;
			}		
		
			num = num/10;
			
			count++;
			
		}
		
	}
	
	for(i=0; i<10; i++)
	{
		printf("%dÀº %d°³\n", i ,arr2[i]);
	}
	
	printf(" %d  %d", sum, count );
}
