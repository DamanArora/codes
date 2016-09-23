//wap to check for prime
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,n,i,flag=0;;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=2;i<=j/2;++i){
            if(n%i==0){
                flag=1;
                break;
            }
        }if(flag==0){
            printf("prime\n");}
        else{printf("not prime\n");}
        }
    return 0;
}
