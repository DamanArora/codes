#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    printf("enter a&b:");
    scanf("%d %d",&a,&b);
    printf(" 1 to add\n");
    printf(" 2 to sub\n");
    printf(" 3 to multi\n");
    printf(" 4 to divide\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        d=a+b;
        printf("%d",d);
        break;
    case 2:
        d=a-b;
        printf("%d",d);
        break;
    case 3:
        d=a*b;
        printf("%d",d);
        break;
    case 4:
        d=a%b;
        printf("%d",d);
        break;
    default:
        printf("invalid");
    }
}
