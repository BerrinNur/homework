#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b+c==180)
    {
        printf("this three integers can represent a triangle\n");
    }
    if (a + b + c <180)
    {
        printf("this three integers can not represent a triangle\n");
    }
    
}