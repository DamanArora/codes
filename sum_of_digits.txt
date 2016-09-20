//wap to print the reverse of a numbeer or a string;
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,n,j,k=0;
    scanf("%d",&n);
    while(n!=0){
        i=n%10;
        k=k+i;
        n/=10;

    } printf("sum %d",k);
return 0;
}
