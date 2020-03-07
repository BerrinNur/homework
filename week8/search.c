#include <stdio.h>

int yorgan(int seccadeler[], int seccade)
{
    for (int i = 0; i < 20; i++)
    {
        if (seccadeler[i] == seccade)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int yastiklar[20] = {1, 99, 16, 52, 61, 17, 4};
    int userEntry;
    printf("Please enter a integer: ");
    scanf("%d", &userEntry);
    int f = yorgan(yastiklar, userEntry);
    printf("%d\n", f);
}