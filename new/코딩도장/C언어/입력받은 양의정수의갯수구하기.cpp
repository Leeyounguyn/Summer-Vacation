#include<stdio.h>


int main()
{
	int num;
	int count =0; 
	scanf("%d", &num);
	int temp_num = num;
	
	while(num>0)
	{
		count++;
		num = num/10;
	}
	
	printf("%d�� %d �ڸ����Դϴ�. \n  ", temp_num ,count);
	return 0;

}


