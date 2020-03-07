#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int nom = 0;
    srand(time(NULL));
    int x = rand() % 1000;
    int found = 0;
    while (!found)
    {
        int a;
        printf("PLEASE ENTER A NUMBER:");
        scanf("%d", &a);

        if(a < x)
        {
            printf("The number is bigger.");
        }
        else if (a > x)
        {
            printf("The number is smaller.");
        }
        else
        {
            printf("YOU WIN!!!");
            found = 1;
            printf("Nomber of moves: %d \n", nom);
        }
        nom++;
        if (nom > 10)
        {
            printf("YOU LOSE!!!!!!");
            break;
        }
        
    }
   
}