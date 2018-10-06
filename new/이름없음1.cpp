#include <stdio.h>
#define N 200
int main(void){
        char arr[N];
        char check[10]={0};
        int i,j,ab;
        scanf("%[^\n]",arr);
        for(i=0;arr[i]!='\0';i++){
                for(j=0;j<10;j++){
                        check[j]=0;
                }
                for(;(arr[i]!=' ')&&(arr[i]!='\0');i++){
                        j=(arr[i]-48);
                        check[j]++;
                }
                ab=0;
                for(j=0;j<10;j++){
                        if(check[j]!=1){
                                printf("false ");
                                break;
                        }
                        else{
                                ab++;
                        }
                }
                if(ab==10){
                        printf("true ");
                }
        }
        printf("\n");
        return 0;
}

