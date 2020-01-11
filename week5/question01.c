#include <stdio.h>

int main()
{
    int x;
    printf("Bir Sayi Giriniz: ");
    scanf("%d", &x);
   while (x<100)
   {
       x++;
       printf("%d-",x);
   }
   if (x==100)
   {
    printf("\n");
   }
   if (x>100)
   {
       printf("%d\n",x-100);
   }
   
}