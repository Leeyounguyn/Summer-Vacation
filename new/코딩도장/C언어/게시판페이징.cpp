#include<stdio.h>
#include<Math.h>

void detective_search(float, float); 
int main()
{
	float m;
	float n;

	printf("A���� �Խ��� ���α׷��� �ۼ��ϰ� �ִ�. \n\n");
	printf("A���� �Խù��� �� �Ǽ��� �� �������� ������ �Խù����� �Է����� �־��� �� �� ���������� �����ϴ� ���α׷��� �ʿ��ϴٰ��Ѵ�.\n");
	printf("�ѰǼ��� �Է����ּ��� ���� 0��� ����������� �ڵ����� 0�̵˴ϴ�.\n");
	scanf("%f", &m);
	
	while(1)
	{
		printf("���������� ������ �Խù��� ���Է����ּ��� \n");
		scanf("%f", &n);
		
		if(n<=0)
		{
			printf("�ٽ��Է��� �ּ��� \n");
			
		}
		else{
			break;
		}
		
	}
    detective_search(m, n);
    
    return 0;
}

void detective_search(float m, float n)
{
	int z;
	
	if(m==0)
	{
		z = 0;
	}
	else if(m<=n)
	{
		z = 1;
	}else
	{
	    z = ceil(m/n);	
		
	}		
	printf("�ѰǼ� = %d, ���������� �����ټ��ִ� �Խù���= %d , ���������� : %d \n ", (int)m, (int)n, z);	
}
