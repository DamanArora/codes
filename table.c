//wap to input a number and print a table
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,c;
    scanf("%d",&a);
    for(i=0;i<11;i++){
        c=a*i;
        printf("%d * %d = %d\n",a,i,c);
    }
    return 0;
}
