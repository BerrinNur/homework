#include <stdio.h>

int main()
{
    int d;
    printf("Enter your age: ");
    scanf("%d",&d);

    if (d > 18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n");    
    } 
    else 
    {
        printf("SORRY YOU ARE NOT ELIGIBLE FOR CASTING YOUR VOTE.\n");
    }
}