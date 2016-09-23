#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("enter your rank, if between 0<=rank<=49");
    scanf("%d",&a);
    printf("1 if your rank is between 0-9");
    printf("2 if your rank is between 10-19");
    printf("3 if your rank is between 20-29");
    printf("4 if your rank is between 30-39");
    printf("5 if your rank is between 40-49");
    scanf("%d",&b);
    switch(b)
    {
    case 1:
        printf("iit delhi");
        break;
    case 2:
        printf("iit bombay");
        break;
    case 3:
        printf("iit chennai");
        break;
    case 4:
        printf("iit kanpur");
        break;
    case 5:
        printf("iit kharagpur");
        break;
    default:
        printf("INVALID INPUT");
    }
}
