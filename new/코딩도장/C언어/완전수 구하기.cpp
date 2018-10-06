#include<stdio.h>

int main()
{
	int i ,j;
	int input_num;
	int sum = 0;
	printf("완전수 구하기 \n자연수 N을 입력하면 출력으로 N이하의 모든 완전수를 출력합니다. \n"); 
	scanf("%d", &input_num);

	/* n의 약수를 구함 
	for(j=1; j<=input_num; j++)
	{	
		  if(input_num%j==0)
		  {
				printf("%d ", j);
		  }
	}	*/

	for(i=6; i<input_num; i++) // 6미만의 수중에는 완전수가없기떄문에 6부터 시작 
    { 	
	    sum = 0;
	    
		for(j=1; j<i; j++)
		{	
		  if(i%j==0)
		  {
				sum+= j;
		   }
		}
		if(sum == i)
		{		
		   printf("%d ", i);
		}
	}
	printf("는 완전수입니다. \n");

}

