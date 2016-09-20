//wap to find armstrong number;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,n,m,sum=0;
    printf("enter the number of digits");
    scanf("%d",&m);
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        sum+=pow(a,m);
        n/=10;
    }
    printf("%d",sum);
return 0;
}
