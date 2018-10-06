#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

void average(int *arr, int size);

int main()
{
	int arr[] = {4, 6,8};
	int arr2[] = {11, 17, 20 ,24};
	int arr3[] = {26, 33 , 45 , 51 , 60};
	int len = 0;
	int i;
	
	average(arr, sizeof(arr)/sizeof(int));
	average(arr2, sizeof(arr2)/sizeof(int));
	average(arr3, sizeof(arr3)/sizeof(int));
	int *g_arr;
	
	printf("리스트에 입력할 정보의 크기를 입력하세요 : ");
	scanf("%d", &len);
	 
	g_arr = (int *)malloc(sizeof(int )*len);
	
	for(i=0; i<len; i++)
	{
		scanf("%d", &g_arr[i]);
	}
	
	
	printf("평균값 : ");
	average(g_arr, len);
	
	free(g_arr);


}

void average(int *arr, int size)
{
	int i;
	int result=0;
	
	for(i=0; i<size; i++)
	{
		result +=arr[i];	
	}
	result = result/ size;
	
	printf("%d  ", result);
}
