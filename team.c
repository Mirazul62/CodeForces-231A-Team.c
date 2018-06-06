#include<stdio.h>
int main()
{
    int a,b,c,d=0,sum=0,n,i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        d=a+b+c;
        if(d>=2)
        {
            sum+=1;
        }
    }
    printf("%d", sum);
}
