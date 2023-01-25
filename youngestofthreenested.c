#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of Ram : ");
    scanf("%d", &a);
    printf("Enter the age of Shyam : ");
    scanf("%d", &b);
    printf("Enter the age of Ajay : ");
    scanf("%d", &c);
    if(a < b)
    {
        if(a < c )
            printf("%d is youngest", a);
        else
            printf("%d is youngest", c);
    }
    else
    {
        if(b < c)
            printf("%d is youngest", b);
        else
            printf("%d is youngest", c);
    }
    return 0;
}