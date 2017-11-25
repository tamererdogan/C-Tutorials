#include <stdio.h>

int kucukbul(int sayi[])
{
    int sayac,sonuc;
	for(int j=0; j<3;j++)
	{
		sayac=0;
		for(int k=0;k<3;k++)
		{
			if(sayi[j] < sayi[k])
			{
				sayac++;
			}
		}

		if(sayac == 2)
		{
			sonuc= sayi[j];
			break;
		}
	}
	return sonuc;
}

int main()
{
	int sayi[2];
	int kucuk;

	for(int i=0;i<3;i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayi[i]);
	}

	kucuk = kucukbul(sayi);

	printf("En kucuk sayi: %d",kucuk);

	return 0;
}
