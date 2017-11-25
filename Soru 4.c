#include <stdio.h>

int main()
{
	float sayi,sonuc;

	printf("Ondalik sayi giriniz: ");
	scanf("%f",&sayi);

	sonuc = (sayi*3)/10 ;

	printf("Girdiginiz sayinin yuzde 30\'u : %.2f",sonuc);

	return 0;
}
