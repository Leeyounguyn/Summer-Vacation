#include<stdio.h>

int main()
{
	int i ,j;
	int input_num;
	int sum = 0;
	printf("������ ���ϱ� \n�ڿ��� N�� �Է��ϸ� ������� N������ ��� �������� ����մϴ�. \n"); 
	scanf("%d", &input_num);

	/* n�� ����� ���� 
	for(j=1; j<=input_num; j++)
	{	
		  if(input_num%j==0)
		  {
				printf("%d ", j);
		  }
	}	*/

	for(i=6; i<input_num; i++) // 6�̸��� ���߿��� �����������⋚���� 6���� ���� 
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
	printf("�� �������Դϴ�. \n");

}

