#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
	int *number; // �Է¹��� ���� �����ϱ����� ������ ���� 
	int i = 0;
	int count = 0;
	int count2[2] ={0, };  //Ȧ�� ¦���� �����ϱ����� �迭 
	int k = 0;
	
	
	number = (int *)malloc(sizeof(int) * 3);
	printf("�Է¹��� ������ Ȧ���� ¦���� ���������ϴ� ���α׷��Դϴ�. \n");
	printf("���ڸ� �Է��ϼ��� . Enter�� �Է��ϸ� ���ڰ� ����˴ϴ�. ");
	 
	do
	{

		scanf("%d", &number[count]);
		count++;
		
		if(count>3) //3���̻��ϰ�쿡�� �����Ҵ����� �ٽ� �Ҵ����.  
		{
			number = (int *)realloc(number, count *sizeof(int));
			number[count]++;
		}

	}
	while(getc(stdin)==' ');
	
	printf("�Է� ���� �� :  ");
	for(i=0; i<count; i++)
	{
		printf("%d ", number[i]);
		if(number[i]%2==0) //¦���ǰ��� 
		{
			count2[0]++;
		}
		else
		{
			count2[1]++; //Ȧ���ǰ��� 
		}
	} 
	
	printf("= Ȧ�� %d �� , ¦�� =%d�� ", count2[1], count2[0]);
					
	return 0;
}


