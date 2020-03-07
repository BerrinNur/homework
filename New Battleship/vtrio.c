#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"

int row = 5;
int col =5;

void clear()
{
    system("clear");
}

char table[10][10];

void clearTable()
{
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            if (row == 0)
            {
                table[row][col] = '0' + col;
            }
            else if (col == 0)
            {
                table[row][col] = '0' + row;
            }
            else
            {
                table[row][col] = ' ';
            }
        }
    }
}
void placeVTrio(int r, int c)
{
    table[r][c] = 'H';
    table[r-1][c] = 'H';
    table[r+1][c] = 'H';
}
void removeVTrio(int r, int c)
{
    table[r][c] = ' ';
    table[r-1][c] = ' ';
    table[r+1][c] = ' ';
}
void moveVTrio(int r, int c)
{
    removeVTrio(row,col);
    placeVTrio(r,c);
    row = r;
    col = c;
}
void printTable()
{
    clear();
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%c ", table[row][col]);
        }
        printf("\n");
    }
}
void start()
{
    clearTable();
    placeVTrio(row,col);
    printTable();
    char c = get_ch();
    int nr = row;
    int nc = col;
    switch (c)
    {
    case 'W':
    case 'w':
        nr--;
        break;
    case 'A':
    case 'a':
        nc--;
        break;
    case 'S':
    case 's':
        nr++;
        break;
    case 'D':
    case 'd':
        nc++;      
        break;
    }
    moveVTrio(nr,nc);
    printTable();
}
int main()
{
    while (1)
    {
    start();
    }
    
}