//wap to check if palindrome
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b=0,c;
    scanf("%d",&a);
    while(a!=0){
        c=a%10;
        b=b*10+c;
        a/=10;
    }
    if(a==b){
        printf("same");
    }
    else{
        printf("not");
    }
return 0;
}
