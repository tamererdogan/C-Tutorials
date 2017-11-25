#include <stdio.h>

int ebob(int x,int y)
{
	int bol;
	int sonuc;

	if(x>y)
	{
		bol=x;
	}
	else
	{
		bol=y;
	}

	for(bol;bol>0;bol--)
	{
		if(x%bol==0 && y%bol==0)
		{
			sonuc = bol;
			break;
		}
	}

	return sonuc;
}

int main()
{
	int sayi1,sayi2,sonuc;

	printf("1. sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d",&sayi2);

	sonuc = ebob(sayi1,sayi2);

	printf("Girdiginiz sayilarin EBOB\'u : %d",sonuc);

	return 0;
}
