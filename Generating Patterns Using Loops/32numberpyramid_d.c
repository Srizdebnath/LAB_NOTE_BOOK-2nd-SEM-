#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       int n,i,j,k,m;
    scanf("%d",&n);
    int c=(n/2)*3;
    int x=3;
    for(i=1;i<=n;i=i+2)
    {
        for(j=1;j<=i;j++)
            printf("%d ",i);
        for(k=1;k<=c;k++)
            printf("  ");
        c=c-3;
        for(m=1;m<=i;m++)
            printf("%d ",i);
        printf("\n");
    }
    for(i=n-2;i>=1;i=i-2)
    {
        for(j=i;j>=1;j--)
            printf("%d ",i);
        for(k=1;k<=x;k++)
            printf("  ");
        x=x+3;
        for(m=i;m>=1;m--)
            printf("%d ",i);
        printf("\n");      
    }
    return 0;
}