#include <stdio.h> 
int width;          
int height;         

int area;           
int perimeter;      

int main() {
	height = 17;
	width = 51;

    perimeter = 2*(height + width);
	printf("Dikdortgenin cevresi %ddir\n", perimeter);
	
	area = height * width;
	printf("Dikdortgenin alani= %ddir\n", area);

return(0);
}