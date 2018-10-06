#include<stdio.h>
#include<string.h>

/*
 삼각형    - 예각, 직각, 둔각
 삼각형 X  - 합이 180가 아닐경우, 입력값이 4개이상인경우, 하나의 각이 0 일 
*/

void display_array(int *, int );
 
int main()
{
	int degree[3] ={0, };
	int i = 0;
	int count =0;
	int sum = 0;
	
	printf("3개의 각으로 삼각형의 예각 직각 둔각을 구별하는 프로그램입니다.");
	printf("ex)예각삼각형 : 3개의 각이 모두 예각인 삼각형 \n직각삼각형 : 1개의 각이 직각인 삼각형");
	printf(" 둔각삼각형 : 1개의 각이 둔각인 삼각형 \n각이 3개가 아닐 경우 삼각형이 아니다. \n3개의 각의 합이 180°가 아닐 경우 삼각형이 아니다.\n");
	printf("각도를 입력해 주세요 enter를 누르면 각도가 저장됩니다. ");
	
	do
	{
		scanf("%d", &degree[count]);
		count++;
	}
	while(getc(stdin) ==' ');
	
	if(count>3) //입력받은 각이 4개 이상인 경우 
	{
		display_array(degree, count);
		printf(" = 삼각형이 아니다. ");
		return 0;
	}
	
	display_array(degree, count);
		
	for(i=0; i<3; i++)
	{
		if(degree[i] == 0)
		{
		
			printf(" = 삼각형이 아닙니다. \n"); //3각 중 하나가 0인경우  
			return 0; 
		}
	}
	
	for(i=0; i<3; i++)
	{
		    sum += degree[i];
					
			if(sum == 180 && 1<=degree[i] && degree[i]<90)
			{
					printf("= 예각 삼각형 "); 
					
			}
			else if(degree[i]>0 && sum == 180 && degree[i] == 90)
			{
					printf(" = 직각 삼각형 ");
			}
			else if(degree[i]>0 && sum == 180 && degree[i]>90)
			{
					printf(" = 둔각 삼각형 ");
			}
			else
			{
				printf(" = 삼각형이 아닙니다. "); //합계가 180 이상이거나 미만인경우 
				return 0; 
			}  
	}	
	return 0;
}

void display_array(int *arr, int size)
{
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
}
