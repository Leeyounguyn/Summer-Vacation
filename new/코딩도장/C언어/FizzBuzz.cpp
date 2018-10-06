#include<stdio.h>

int main()
{
	int i;
	int count= 0;
	for(i=1; i<101; i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("FizzBuzz ");
		}
		else if(i%3==0)
		{
			printf("Fizz ");
		}
		else if(i%5==0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	    count++;
	    if(count%10==0)
	    {
	    	printf("\n");
		}
		
	}
}
