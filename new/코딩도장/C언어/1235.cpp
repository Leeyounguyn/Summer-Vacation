#include<stdio.h>
#include<math.h>

void  sum_number(int );

int main()
{
	int num = pow(2, 15);
	int sum =0;
	
	float num2 = pow(2, 1000);
	printf("2^15 = %d \n", num);
	sum_number(num);
	num2 = pow(2, 1000);
	
	printf("2^1000 =%f \n", num2);
	
	sum_number(num2);
	
	

}

void sum_number(int num)
{
	int sum = 0;
	
	
	while(num>0)
	{
		sum += num%10;
		num = num/10;
	}
	
	printf("sum = %d ", sum);
}
