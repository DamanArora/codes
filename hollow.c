//wap to print a holllow triangle
#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        /*if(i==n){
            printf("9");
        }*/
        for(j=1;j<=i;j++){
            if(j==1 || j==i || i==n){
                printf("*");
                /*if(i==n){
                    printf("8");
                }*/
            }
            else{
                printf(" ");
            }
            /*if(i<j){
                printf("0");
            }*/
        }
        printf("\n");
       /*if(i==j){
        printf("8");
        i++;
       }*/
    }
}
