//wap to print the factorial of a number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i;
    unsigned long long int c=1;
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        c*=i;
    }
     printf("%d\n",c);
    return 0;
}

