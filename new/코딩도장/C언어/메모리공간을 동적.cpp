#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int sum = 0;
	int avg = 0;
	int size;
	int i;
	
	printf("�޸� ������ �������� ��� �մϴ�. �Է��� ������ ������ �Է��ϼ��� : ");
	scanf("%d", &size);
	
	arr = (int *)malloc(sizeof(int)*size);
	
	for(i=0; i<size; i++)
	{
		printf("%d ���� �Է� : ", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum/size;
	
	printf("���հ� = %d ��� = %d \n", sum , avg);
	
	
	free(arr);
}
