#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

          int n,i,j,k,m,even1,even2,odd1,odd2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {printf("  ");
        }
        printf("1   ");
        if(i==1)
        {
            printf("\n");
            continue;
        }
        
        else if(i%2==0)
        {   odd1=(i/2)-1;
            odd2=odd1;
            for(k=i-1;;k=k+2)
            { 
                if(odd1==0)
                    break;
                printf("%d   ",k);
                odd1--;
            }
            for(m=k-2;;m=m-2)
            {
                if(odd2==0)
                {   printf("1");
                    printf("\n");
                    break;  
                }
                 printf("%d   ",m);
                odd2--;
            }
        }
        else
        {   even1=i/2;
            even2=even1-1;
            for(k=i-1;;k=k+2)
            {
                if(even1==0)
                    break;
                printf("%d   ",k);
                even1--;  
            }
         for(m=k-4;;m=m-2)
         {
             if(even2==0)
             {
                 printf("1");
                 printf("\n");
                 break;
             }
             printf("%d   ",m);
             even2--;
         }
            
        }
    }
    return 0;
}