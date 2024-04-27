
#include<stdio.h>
int fibonacci(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}
int main()
{
    int i,n,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==n)
                break;
            printf("%d ",fibonacci(k));
            k++;
        }
        printf("\n");
    }
    return 0;
}