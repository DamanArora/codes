//wap to print factorial of first n numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,j;
    unsigned long long int fact=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
      fact*=i;
        printf("%d ",fact);
    }

}
