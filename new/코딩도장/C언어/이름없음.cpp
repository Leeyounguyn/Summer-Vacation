#include <stdio.h>

 

int gdc(int ,int ); //�ִ����� �Լ� ����

int lcm(int ,int ); //�ּҰ���� �Լ� ����

 

int main(void)

{

           int a,b; //�� ����

          

           printf("�ΰ��� ������ �Է��̽ÿ� : ");

           scanf("%d%d",&a,&b);

           printf("%d,%d�� �ִ������� %d�Դϴ�.\n",a,b,gdc(a,b)); //�Լ�����Ͽ� ���

           printf("%d,%d�� �ּҰ������ %d�Դϴ�.\n\n",a,b,lcm(a,b)); //�Լ�����Ͽ� ���

          

           return 0;

}

 

int gdc(int a,int b) //�ִ������� ��ȯ�ϴ� �Լ�

{         

           int i,j;

           int temp; //������� ������ ����

          

           j = (a<b)?a:b; //���� �������� ����

          

           for(i=1;i<=j;i++) {

                     if(a%i==0 && b%i==0)

                                temp = i;

           }

          

           return temp;

}

 

int lcm(int a,int b) //�ּҰ������ ��ȯ�ϴ� �Լ�

{

           int i,j;

           int temp; //������� ������ ����

          

           j = (a>b)?a:b; //���� ū���� ����

          

           for(i=j;;i++) {

                     if(i%a==0 && i%b==0){

                                temp = i;

                                break;

                     }

           }

          

           return temp;

}
