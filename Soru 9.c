#include <stdio.h>

int main()
{
	int kisa,uzun,Csonuc,Asonuc;

	printf("Cevresi ve Alani hesaplanacak dikdortgenin kisa ve uzun kenarlarini giriniz: \n");
	scanf("%d %d",&kisa,&uzun);

	Csonuc = (2*kisa) + (2*uzun);
	Asonuc = kisa * uzun;

	printf("Cevre: %d\nAlan: %d",Csonuc,Asonuc);

	return 0;
}
