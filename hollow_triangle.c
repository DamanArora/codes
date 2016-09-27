//wap to print pyramid pattern
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            if(i==n || j==i || j==(2*i-1)){
                printf(" *");
            }
        }
        for(j=i;j>1;j--){
            printf(" ");
        }
        printf("\n");
    }
}
