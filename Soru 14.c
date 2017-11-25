#include <stdio.h>
#include <stdbool.h>

int main()
{
	int yil,kontrol4,kontrol400;
	bool kontrol00;

	printf("Bir yil giriniz: ");
	scanf("%d",&yil);

	kontrol4 = yil%4;
	kontrol400 = yil%400;

	if( (yil % 100) == 0 )
	{
		kontrol00 = true;
	}
	else
	{
		kontrol00 = false;
	}

	if(kontrol00 == true)
	{
	   	if(kontrol400 != 0)
		{
		   printf("%d artik yil degildir.",yil);
		}
		else
		{
			printf("%d artik yildir",yil);
		}
	}
	else
	{
		if(kontrol4 != 0)
		{
			printf("%d artik yil degildir.",yil);
		}
		else
		{
			printf("%d artik yildir",yil);
		}
	}

	return 0;
}
