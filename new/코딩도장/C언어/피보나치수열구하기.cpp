#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a = 0, b = 1;
	int c;
	int input_num;
	
	printf("피포나치 수열 구하기 첫번째항의값은 0 이고 두번째 항의 값은1입니다. \n");
	printf("정수 n을 입력하세요 : ");

	do
	{
		scanf("%d", &input_num);
		if(input_num>0)
			break;
		else
			printf("음수를 입력하셨습니다. 다시입력해주세요 : ");
				
	}while(1);
	 
	printf("%d %d ", a ,b);
	
	while(1)
	{
		c = a+b;
		printf("%d ", c);
		a = b;
		b = c;
		
		if(c>=input_num)
			break;
			
	}
}
