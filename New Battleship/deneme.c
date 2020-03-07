#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"
int row = 5;
int col = 5;
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
                table[row][col] = '0'+col;
            }
            else if (col==0)
            {
                table[row][col] = '0'+row;
            }
            else
            {
                table[row][col] = ' ';
            } 
        }
        
    }
    
}
void prinTable()
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
void placeHDuo(int r, int c)
{
    table[r][c] = 'D';
    table[r+1][c] = 'D';
}
void placeVTrio(int r, int c)
{
    table[r][c] = 'V';
    table[r][c-1] = 'V';
    table[r][c+1] = 'V';
}
void placeHTrio(int r, int c)
{
    table[r][c] = 'H';
    table[r-1][c] = 'H';
    table[r+1][c] = 'H';
}void placeAdmiral(int r, int c)
{
    table[r][c] = 'A';
    table[r-1][c-1] = 'A';
    table[r-1][c+1] = 'A';
    table[r+1][c-1] = 'A';
    table[r+1][c+1] = 'A';
}
void removeHDuo(int r, int c)
{
    table[r][c] = ' ';
    table[r+1][c] = ' ';
}
void removeVTrio(int r, int c)
{
    table[r][c] = ' ';
    table[r][c-1] = ' ';
    table[r][c+1] = ' ';

}
void removeHtrio(int r, int c)
{
    table[r][c] = ' ';
    table[r-1][c] = ' ';
    table[r+1][c] = ' ';

}
void removeAdmiral(int r, int c)
{
    table[r][c] = ' ';
    table[r-1][c-1] = ' ';
    table[r-1][c+1] = ' ';
    table[r+1][c-1] = ' ';
    table[r+1][c+1] = ' ';
}
void moveHDuo(int r, int c)
{
    removeHDuo(row, col);
    placeHDuo(r,c);
    row = r;
    col = c;
}
void moveVTrio(int r, int c)
{
    removeVTrio(row, col);
    placeVTrio(r,c);
    row = r;
    col = c;
}
void moveHTrio(int r, int c)
{
    removeHtrio(row, col);
    placeHTrio(r,c);
    row = r;
    col = c;
}
void moveAdmiral(int r, int c)
{
    removeAdmiral(row, col);
    placeAdmiral(r, c);
    row = r;
    col = c;
}

void amiralIcin()
{
    placeAdmiral(row, col);
    prinTable();
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
    moveAdmiral(nr, nc);
    prinTable();
}
void HDuoIcin()
{
    placeHDuo(row,col);
    prinTable();
}
void Prop()
{
    int prop;
    printf("Which one do you want to move?\n1-Amiral\n2-Horizontal Trio\n3-Vertical Trio\n4-Horizontal Duo\n5-Vertical Duo\n6-Soldier\n");
    scanf("%d",&prop);
    switch (prop)
    {
    case 1:
            amiralIcin();
    case 2:
            
    
    default:
        break;
    }

}
void start()
{
    clearTable();
    Prop();

}
int main()
{
    Prop();
    while (1)
    {
        start();
    }
    
}