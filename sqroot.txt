//wap to print the sq root of a number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i;
    printf("enter a real number only");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        if(i*i==a){
            printf("%d is the square root of %d",i,a);
        }
    }
    return 0;
}
