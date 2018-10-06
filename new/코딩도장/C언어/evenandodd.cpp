#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
	int *number; // 입력받은 값을 저장하기위한 포인터 변수 
	int i = 0;
	int count = 0;
	int count2[2] ={0, };  //홀수 짝수를 저장하기위한 배열 
	int k = 0;
	
	
	number = (int *)malloc(sizeof(int) * 3);
	printf("입력받은 수들의 홀수와 짝수의 개수를구하는 프로그램입니다. \n");
	printf("숫자를 입력하세요 . Enter를 입력하면 숫자가 저장됩니다. ");
	 
	do
	{

		scanf("%d", &number[count]);
		count++;
		
		if(count>3) //3개이상일경우에는 동적할당으로 다시 할당받음.  
		{
			number = (int *)realloc(number, count *sizeof(int));
			number[count]++;
		}

	}
	while(getc(stdin)==' ');
	
	printf("입력 받은 수 :  ");
	for(i=0; i<count; i++)
	{
		printf("%d ", number[i]);
		if(number[i]%2==0) //짝수의개수 
		{
			count2[0]++;
		}
		else
		{
			count2[1]++; //홀수의개수 
		}
	} 
	
	printf("= 홀수 %d 개 , 짝수 =%d개 ", count2[1], count2[0]);
					
	return 0;
}


