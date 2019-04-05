#include <stdio.h>
void main()
{
    int n,a,d,sum=0,i;
    printf("enter the values");
    scanf("%d%d%d",&n,&a,&d);
    for(i=n;i>0;i--)
    {
    sum=sum+(a+(n-1)*d);
    }
    sum=sum+a;
    printf("%d",sum);
}
