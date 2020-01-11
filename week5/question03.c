#include <stdio.h> 

int main() 
{
   int a;
   printf("Enter an integer: \n");
   scanf("%d",&a);
   if (a /9)
   {
       printf("%d 9'a bolunebilir\n",a);
   }
    else if (a / 5)
    {
       printf("%d 5'e bolunebilir\n",a);
    }
    else
    {
        printf("%d 5'e veya 9'a bolunemez\n",a);
    }
}