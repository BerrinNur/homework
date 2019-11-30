#include <stdio.h>
int main()
{
    int ages []={12, 24, 36, 48, 60};
    char isimBasHarfleri []={'M','B','H','M', 'V'};
    float takipciSayim []={1.9, 2.0, 2.1, 1.1, 2.2};
    for(int i = 0; i < 5; i++)
    {
        printf("%d-%c-%.1lf\n", ages[i], isimBasHarfleri[i], takipciSayim[i]);
    }
    return 0;
}
