//wap to print fibinci series
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a=1;
    int d=0,c,n;
    scanf("%d",&n);
    printf("%d ",d);
    printf("%d ",a);
    for(i=1;i<=n;i++){
        c=a+d;
        d=a;
        a=c;
        printf("%d ",c);
    }
return 0;
}
