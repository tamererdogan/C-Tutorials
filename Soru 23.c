#include <stdio.h>

int main()
{
	char harf[5];
	int seslisayisi=0,sayac;

	for(int i=0;i<5;i++)
	{
		printf("Harf giriniz:");
		scanf("%s",&harf[i]);
	}

    for(int k=0;k<5;k++)
    {
    	sayac = 0;

		switch(harf[k])
		{
			case 'a' :
				sayac++;
				break;
			case 'e' :
				sayac++;
				break;
			case 'i' :
				sayac++;
				break;
			case 'u' :
				sayac++;
				break;
			case 'o' :
				sayac++;
				break;
		}
	    seslisayisi += sayac;
	}

	if(seslisayisi == 0)
	{
		printf("Hic sesli harf girmediniz.");
	}
	else
	{
		printf("%d tane sesli harf girdiniz.",seslisayisi);
	}

	return 0;
}
