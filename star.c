#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<=6;i++)
 {
     for(j=0;j<=i;j++)
     {
         if(j>=2||j>=1&&j<=6-i||j>=3)
     
    {
        printf(" *");
        
    }
     }
     printf("\n");
 }
}
