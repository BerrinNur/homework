#include <stdio.h>

//15. Write a C program to check whether a triangle can be formed by the given value for the angles.
//Test Data:
//40 55 65
//Expected Output:
//The triangle is not valid.

int main()
{
    int a,b,c;
    printf("Enter 3 values:");
    scanf("%d %d %d",&a ,&b ,&c);

    if (a+b+c==180)
    {
        printf("The triangle is valid.\n");
    }
    if (a+b+c< 180 || a+b+c>180)
    {
        printf("The triangle is not valid.\n");
    }
    
    


}