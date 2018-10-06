#include<stdio.h>

#define RANGE 100

int main()
{
	int i,power =0 ,result= 0;
	int sum_of_squares = 0;
	int square_of_sum  = 0;
	
	
	for(i=1; i<=RANGE; i++)
	{
		square_of_sum += i;
		power = i * i;
		sum_of_squares += power;	
	}
	
	
	square_of_sum = square_of_sum * square_of_sum;
	
	if(sum_of_squares > square_of_sum)
	{
		result = sum_of_squares - square_of_sum;
		printf("합의 제곱 (%d) - 제곱의합 (%d)는 %d입니다. \n ", sum_of_squares, square_of_sum, result);		
	}
	else
	{
		result = square_of_sum - sum_of_squares;
		printf("제곱의합  (%d) - 합의제곱  (%d) 는 %d입니다. \n ",  square_of_sum, sum_of_squares ,result);
		
	}
	
	return 0;

}


