#include <stdio.h>

float aritbul(int x,int y)
{
	float sonuc;
	sonuc = ((float)x+y) / 2;
	return sonuc;
}

int main()
{
	int sayi1,sayi2;
	float ort;
	printf("1. sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d",&sayi2);

	ort = aritbul(sayi1,sayi2);

	printf("Girdiginiz sayilarin aritmetik ortalamasi: %.2f",ort);

	return 0;
}
