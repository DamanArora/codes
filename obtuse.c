//wap to print a pyramid
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n=4;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(k=n;k>=i;k--){
            printf("*");
        }
       /* for(k=1;k<=i;k++){
            printf("");
        }**/
        printf("\n");
    }
    return 0;
}
