#include<stdio.h>

int main()
{
	int sum = 0, mul=0;
	int i,j;
	int quotient = 0;
	
	for(i=10; i<=1000; i++)
	{
		printf("%d   ", i);
	    j = i;
	    mul = 1;
		while(j>0)
		{
			quotient = j%10;
			j = j/10;
			mul = mul *quotient;
			printf("sub : %d  ", quotient); 
		}
		printf("  자리수의 곱은 %d \n", mul);
		sum = sum+mul;
	}
	
	printf("10 ~ 1000 까지의 합계는 %d 입니다. ", sum);
}
