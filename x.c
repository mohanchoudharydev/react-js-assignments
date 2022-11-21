#include <stdio.h>

int main()
{
    int i,j,k=0;
    
    for(i=1; i<=9; i++)
    {
     i<6?k++:k--;   
        for(j=1; j<=10; j++)
        {
            if(j<=k||j>=11-k)
                printf(" *");
            else
                printf("  ");  
        }
    
        
        printf("\n");
    }
}
