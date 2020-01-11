#include <stdio.h>

int main()
{
    int b;
    printf("Boyunuzu giriniz: ");
    scanf("%d", &b);


    if (b > 200)
    {
        printf("The person is giant\n");
    }
    else if (b > 160)
    {
        printf("The person is normal\n");
    }
    else 
    {
        printf("The person is dwarf\n");
    }
    
}