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
		printf("  �ڸ����� ���� %d \n", mul);
		sum = sum+mul;
	}
	
	printf("10 ~ 1000 ������ �հ�� %d �Դϴ�. ", sum);
}
