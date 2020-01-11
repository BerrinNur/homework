#include <stdio.h> 

int main() 
{
    int a,b;
    printf("Enter first integer: \n");
    scanf("%d",&a);
    printf("Enter Second integer: \n");
    scanf("%d",&b);

    if (a == 50)
    {
        printf("%d  nin degeri 50'dir",a);
    }
    else if (b == 50)
    {
        printf("%d  nin degeri 50'dir",b);
    }
    else if (a + b == 50)
    {
        printf("a ve b toplam %d dir",a+b);
    }
    
    else
    {
        return 0;
    }
}