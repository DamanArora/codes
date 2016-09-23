//wap to enter a number and print first n tables
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,j,multi=1;
    printf("enter the number of tables you want");
    scanf("%d",&a);
    for(j=1;j<=a;j++){
        for(i=1;i<=10;i++){
            multi=i*j;
            printf("%d\n",multi);
        }printf("\n");
    }
    return 0;
}
