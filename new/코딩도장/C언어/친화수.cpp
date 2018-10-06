#include <stdio.h>
int main(void)
{
    int num=1, j, boolean;
	
	while(1)
	{
		boolean = 0;
		
		for(j=1; j<=10; j++)
		{
			if(num%j!=0)
				boolean =1;
			
			if(boolean == 1)
			{
				printf("±×¸¸ \n");
				break;
			}
		}
		
		if(boolean == 0)
		{
			printf("%d", num);
			break;
		}
		
		num++;
	}
}
