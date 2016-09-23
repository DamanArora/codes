//wap t0 print pascal's triangle
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
}
