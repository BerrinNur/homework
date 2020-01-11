
#include <stdio.h>

int main()
{
    int f;
    printf("Enter a year: ");
    scanf("%d",&f);

    if (f % 4 ==0)
    {
        printf("%d is a leap year\n",f);
    }
    else
    {
        printf("%d is not a leap year\n",f);
    }
}