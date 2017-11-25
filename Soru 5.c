#include <stdio.h>

int main()
{
	float sayi1,sayi2,sayi3,sonuc;
	
	printf("Sirasiyla 3 ondalikli sayi giriniz..\n");
	scanf("%f %f %f",&sayi1,&sayi2,&sayi3);

	sonuc = (sayi1 + sayi2 + sayi3) / 3 ;

	printf("Girdiginiz sayilarin aritmetik ortalamasi: %.1f",sonuc);

	return 0;
}
