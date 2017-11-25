#include <stdio.h>

float dereceCevir(float c)
{
	float f = 32 + (1.8*c) ;
	return f;
}

int main()
{
	float santigrat;
	float yaz;
	printf("Fahrenhayt'a cevrilecek Santigrat dereceyi giriniz: ");
	scanf("%f",&santigrat);

	yaz = dereceCevir(santigrat);
	printf("Girdiginiz degerin Fahrenhayt'a cevrilmis hali: %.2f",yaz);

 	return 0;
}
