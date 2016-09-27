//wap to print a pyramid
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=i;k>1;k--){
            printf("*");
        }
        for(k=i;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }
}
