#include <stdio.h>
int main() 
{
	void showMenu();

    printf("1:MONDAy\n");
    printf("2:TUESDAY\n");
    printf("3:WEDNESDAY\n");
    printf("4:THURSDAY\n");
    printf("5:FRIDAY\n");
    printf("6:SATURDAY\n");
    printf("7:SUNDAY\n");
    printf("Enter an option (1,2,3,4,5,6 or 7): ");
    int option;
    scanf("%d", &option);
    if (option == 1)
    {
        printf("MONDAY\n");
    } 
    else if(option == 2)
    {
        printf("TUESDAY\n");
    }
    else if(option == 3)
    {
        printf("WEDNESDAY\n");
    }
    else if(option == 4)
    {
        printf("THURSDAY\n");
    }
        else if(option == 5)
    {
        printf("FRIDAY\n");
    }
    else if(option == 6)
    {
        printf("SATURDAY\n");
    }
    else if(option == 7)
    {
        printf("SUNDAY\n");
    }
}