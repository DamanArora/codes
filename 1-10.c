//wap to print 1-10
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n=1,a=4;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d",n++);
        }
        printf("\n");
    }
}
