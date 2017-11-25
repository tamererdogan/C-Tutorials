/*
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
Ciktisini ekrana veren program

NOT: i degeri ile bosluk ve yildiz sayisi arasindaki baglantilar
	 i-14	4		   i-m
	18 14   4 bosluk   18-17 1 yildiz
	17 14   3 bosluk   17-14 3 yildiz
	16 14   2 bosluk   16-11 5 yildiz
	15 14   1 bosluk   15-8  7 yildiz
	14 14   0 bosluk   14-5  9 yildiz  m degeri buraya kadar m=m-3 sonrasinda m=m+1 olarak devam ediyor
	13 14  -1 bosluk   13-6	 7 yildiz
	12 14  -2 bosluk   12-7	 5 yildiz
	11 14  -3 bosluk   11-8	 3 yildiz
	10 14  -4 bosluk   10-9	 1 yildiz

i degeri 18'den baslayip 10'a kadar 1er 1er azaliyor
Bosluk sayisi 4ten baslayip -4'e kadar 1er 1er azaliyor
yildizsayisi (i-m) formuluyle bulunuyor,m 17'den 5'e kadar 3er 3er azaliyor sonrasinda 9'a kadar 1er 1er artiyor
*/

#include <stdio.h>
#include <math.h>

int main()
{
	char bosluk = ' ';
	char yildiz = '*';
	int m=17,mutlakj;

	for(int i=18;i>9;i--) // i degeri 18'den 10 degerine kadar 1er 1er azalacak
	{
		mutlakj= abs(i - 14);   //mutlak degeri alinacak

		for(int j=mutlakj;j>0;j--)
		{
			printf("%c",bosluk);  //bosluk karakterini yazdirdik
		}

		for(int k=i-m;k>0;k--)
		{
			printf("%c",yildiz);  //yildiz karakterini yazdirdik
		}

		if(i>14)
		{
			m=m-3;
		}
		else
		{
			m=m+1;
		}

		printf("\n");
	}

	return 0;
}
