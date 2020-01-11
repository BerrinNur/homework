#include <stdio.h>

int main()
{
    int math, phy, chem;
    printf("Please enter your grades\n Maths, Phy and Chem: ");
    scanf("%d %d %d", &math, &phy, &chem);

    if ((math >= 65 && phy >= 55 && chem >= 50 && math+phy+chem>=180)||(math+phy>=140)) 
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }
}