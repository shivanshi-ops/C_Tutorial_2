#include<stdio.h>
int main()
{
    int cp; // dabba
    printf("Enter cost price : ");
    scanf("%d", &cp);
    int sp; // dabba
    printf("Enter selling price : ");
    scanf("%d", &sp);
    if(sp > cp)
    {
        printf("Profit");
    }
    else if(cp > sp)
    {
        printf("Loss");
    }
    else
    {
        printf("No profit, no loss");
    }
    return 0;
}