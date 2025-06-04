#include <stdio.h>

int main()
{
    int n=10,k=5;
    int sale;
    printf("enter the number of candies:");
    scanf("%d",&sale);
    if(sale >= 1&&sale <= k)
    {
        printf("number of candies saled:%d",sale);
        printf("number of candies left:%d",sale-n);
        
    }else
    {
        printf("INVALID INPUT");
        printf("Number of candies left:%d",n);
    }
}
    
