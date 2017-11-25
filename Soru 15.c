#include <stdio.h>

int main()
{
	int sayi;

	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);

	if(sayi >= 1 && sayi<=500)
	{
		if(sayi == 1)
		{
				printf("Girdiginiz sayi asal degildir.");
		}
		else
		{
	 		if(sayi == 2 || sayi == 3)
			{
				printf("Girdiginiz sayi asaldir.");
			}
			else
			{
			 	if( sayi%2 == 0 || sayi%3 == 0)
				{
					printf("Girdiginiz sayi asal degildir.");
				}
				else
				{
					printf("Girdiginiz sayi asaldir.");
				}

			}
		}

	}
	else
	{
		printf("Girdiginiz sayi 1 ile 500 arasinda degildir.");
	}

	return 0;
}
