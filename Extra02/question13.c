#include <stdio.h>

int main()
{
    int a;
    printf("Enter temperature in centigrade:\n");
    scanf("%d ",&a);
    if (a < 0)
    {
        printf("it is freezing weather\n");
    }
    if (a >10 && a< 20)
    {
        printf("it is very cold weather\n");
    }
    if (a >20 && a< 30)
    {
        printf("Normal in Temp\n");
    }
    if (a >30 && a< 40)
    {
        printf("it is hot");
    }
    if (a >40)
    {
        printf("it is very hot");
    }
    
}