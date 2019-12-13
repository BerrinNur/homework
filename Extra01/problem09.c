#include <stdio.h>
int main() 
{
	int x;
	float y;
	printf("km cinsinden toplam giriş mesafesi: ");
	scanf("%d",&x);
	printf("Litre cinsinden harcanan toplam yakiti giriniz: ");
	scanf("%f", &y);
	printf("Ortalama Tuketim %.3f ",x/y);
	printf("\n");
	return 0;
}