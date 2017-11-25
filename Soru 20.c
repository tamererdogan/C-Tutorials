#include <stdio.h>
#include <math.h>

int main()
{
	int sayi[4];

	for(int i=0;i<5;i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayi[i]);
	}

	float arit = ((float)sayi[4] + sayi[3]) / 2;
	int geoo= sayi[4] * sayi[3];
	float geo = sqrt(geoo);
	printf("Aritmetik Ortalama: %.1f, Geometrik Ortalama: %.2f..",arit,geo);

	return 0;
}
