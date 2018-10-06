#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i, r, j, random[7];
    srand(time(NULL));
    for(i=0;i<=6;i++)
    {
        
        r=rand()%45+1;
        for(j=0;j<=i-1;j++)
            if(r==random[j])
                goto again;
        random[i]=r;
    }
    for(i=0;i<=6;i++)
        printf("%d\n", random[i]);
    printf("\n");
    return 0;
}


