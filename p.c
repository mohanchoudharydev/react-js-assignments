#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n/2;j++)
        {
            if(j==1||i==1||(i<=n/2&&j==n/2)||i==n/2)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
      }
    }

