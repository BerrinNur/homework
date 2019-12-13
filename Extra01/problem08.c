#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
    printf("\nilk sayiyi giriniz: "); 
    scanf("%d", &x);
    printf("\nikinci sayiyi giriniz: ");
    scanf("%d", &y);
    printf("\nucuncu sayiyi giriniz: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum  of three integers: %d", max);
	printf("\n");
    return 0;
}