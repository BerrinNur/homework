#include <stdio.h>
int main()
{
    int neKoysamBulamadim1[]= {14,15,16,17,18,19,20,21,22,23,24,54, 55, 64, 17, 39,84, 95, 56,100};
    int toplam = 0;
    int i = 0;
    while (i < 20)
    {
        toplam = toplam + neKoysamBulamadim1[i];
        i++;
    }
    printf("Toplam = %d\n",toplam);
}