#include <stdio.h>

 

int gdc(int ,int ); //최대공약수 함수 선언

int lcm(int ,int ); //최소공배수 함수 선언

 

int main(void)

{

           int a,b; //두 정수

          

           printf("두개의 정수를 입력이시오 : ");

           scanf("%d%d",&a,&b);

           printf("%d,%d의 최대공약수는 %d입니다.\n",a,b,gdc(a,b)); //함수사용하여 출력

           printf("%d,%d의 최소공배수는 %d입니다.\n\n",a,b,lcm(a,b)); //함수사용하여 출력

          

           return 0;

}

 

int gdc(int a,int b) //최대공약수를 반환하는 함수

{         

           int i,j;

           int temp; //공약수를 저장할 변수

          

           j = (a<b)?a:b; //둘중 작은수를 구함

          

           for(i=1;i<=j;i++) {

                     if(a%i==0 && b%i==0)

                                temp = i;

           }

          

           return temp;

}

 

int lcm(int a,int b) //최소공배수를 반환하는 함수

{

           int i,j;

           int temp; //공배수를 저장할 변수

          

           j = (a>b)?a:b; //둘중 큰수를 구함

          

           for(i=j;;i++) {

                     if(i%a==0 && i%b==0){

                                temp = i;

                                break;

                     }

           }

          

           return temp;

}
