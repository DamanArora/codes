//wap to print the reverse of a number or a string;
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
        k=k*10+i;
        n/=10;
    }
    printf("reverse %d",k);
return 0;
}
