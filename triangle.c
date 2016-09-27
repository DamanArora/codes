//wap to print a 90 degree triangle
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
