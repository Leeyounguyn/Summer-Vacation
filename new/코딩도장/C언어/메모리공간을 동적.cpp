#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int sum = 0;
	int avg = 0;
	int size;
	int i;
	
	printf("메모리 공가늘 동적으로 사용 합니다. 입력할 정수의 개수를 입력하세요 : ");
	scanf("%d", &size);
	
	arr = (int *)malloc(sizeof(int)*size);
	
	for(i=0; i<size; i++)
	{
		printf("%d 번쨰 입력 : ", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum/size;
	
	printf("총합계 = %d 평균 = %d \n", sum , avg);
	
	
	free(arr);
}
