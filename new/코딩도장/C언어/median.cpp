#include<stdio.h>

int main()
{
	int arr[ ] = {1,10,90,200};
	int arr2[] = {24, 31, 35, 49};
	
	int len;
	int even;
	len = sizeof(arr)/sizeof(int );
	
	if(len%2!=0)
	{
		printf("Ȧ�� : ����Ʈ�� �߾Ӱ��� :%d �Դϴ�. \n", arr[len/2]);
	}
	else
	{
		len =len/2;
		even = (arr[len-1] + arr[len])/2;
		printf("¦�� ����Ʈ�� �߾Ӱ��� %d �Դϴ�. \n", even);
		
	}
	
}
