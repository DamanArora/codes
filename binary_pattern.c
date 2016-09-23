//wap to print binary pattern
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,a=1,b=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
           // printf("%d",a);
            if(i%2==0){
                printf("01");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}
