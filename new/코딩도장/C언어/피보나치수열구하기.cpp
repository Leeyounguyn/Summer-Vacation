#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a = 0, b = 1;
	int c;
	int input_num;
	
	printf("������ġ ���� ���ϱ� ù��°���ǰ��� 0 �̰� �ι�° ���� ����1�Դϴ�. \n");
	printf("���� n�� �Է��ϼ��� : ");

	do
	{
		scanf("%d", &input_num);
		if(input_num>0)
			break;
		else
			printf("������ �Է��ϼ̽��ϴ�. �ٽ��Է����ּ��� : ");
				
	}while(1);
	 
	printf("%d %d ", a ,b);
	
	while(1)
	{
		c = a+b;
		printf("%d ", c);
		a = b;
		b = c;
		
		if(c>=input_num)
			break;
			
	}
}
