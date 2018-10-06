#include <stdio.h>


int main()
{
	int num,num1,num2;
	
	int i;
	int count =1;
	int a_c = 0;
	int max;
	int len;
	
	
	do
	{
		printf("두개의 정수 i와 j를 입력하세요 : j가 i보다합니다.(j>i) ");
		scanf("%d %d", &num1, &num2);
	
	}while(num2<num1);
	
	len = (num2 - num1)+1;
	
	int c_arr[len] ={0, };
	
	for(i=num1; i<=num2; i++)
	{
		num = i;
		
		do
		{		
			if(num%2==0)
			{
				num = num/2;
			}else
			{
				num = (3*num)+1;
			}
			c_arr[a_c]++;
			
		}while(num!=1);
		
		a_c++;
	}
 	
 	max = c_arr[0];
 	
 	for(i=0; i<len; i++)
 	{
		if(max < c_arr[i])
		{
			max = c_arr[i];
		}
	}
	printf("%d", max+1);
}
