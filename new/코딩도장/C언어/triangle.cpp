#include<stdio.h>
#include<string.h>

/*
 �ﰢ��    - ����, ����, �а�
 �ﰢ�� X  - ���� 180�� �ƴҰ��, �Է°��� 4���̻��ΰ��, �ϳ��� ���� 0 �� 
*/

void display_array(int *, int );
 
int main()
{
	int degree[3] ={0, };
	int i = 0;
	int count =0;
	int sum = 0;
	
	printf("3���� ������ �ﰢ���� ���� ���� �а��� �����ϴ� ���α׷��Դϴ�.");
	printf("ex)�����ﰢ�� : 3���� ���� ��� ������ �ﰢ�� \n�����ﰢ�� : 1���� ���� ������ �ﰢ��");
	printf(" �а��ﰢ�� : 1���� ���� �а��� �ﰢ�� \n���� 3���� �ƴ� ��� �ﰢ���� �ƴϴ�. \n3���� ���� ���� 180�ư� �ƴ� ��� �ﰢ���� �ƴϴ�.\n");
	printf("������ �Է��� �ּ��� enter�� ������ ������ ����˴ϴ�. ");
	
	do
	{
		scanf("%d", &degree[count]);
		count++;
	}
	while(getc(stdin) ==' ');
	
	if(count>3) //�Է¹��� ���� 4�� �̻��� ��� 
	{
		display_array(degree, count);
		printf(" = �ﰢ���� �ƴϴ�. ");
		return 0;
	}
	
	display_array(degree, count);
		
	for(i=0; i<3; i++)
	{
		if(degree[i] == 0)
		{
		
			printf(" = �ﰢ���� �ƴմϴ�. \n"); //3�� �� �ϳ��� 0�ΰ��  
			return 0; 
		}
	}
	
	for(i=0; i<3; i++)
	{
		    sum += degree[i];
					
			if(sum == 180 && 1<=degree[i] && degree[i]<90)
			{
					printf("= ���� �ﰢ�� "); 
					
			}
			else if(degree[i]>0 && sum == 180 && degree[i] == 90)
			{
					printf(" = ���� �ﰢ�� ");
			}
			else if(degree[i]>0 && sum == 180 && degree[i]>90)
			{
					printf(" = �а� �ﰢ�� ");
			}
			else
			{
				printf(" = �ﰢ���� �ƴմϴ�. "); //�հ谡 180 �̻��̰ų� �̸��ΰ�� 
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
