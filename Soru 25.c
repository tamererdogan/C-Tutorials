#include <stdio.h>

int main()
{
	char kelime[10];
	int sayac=0;

	printf("Kelime giriniz: ");
	scanf("%s",kelime);

	for(int i=0;kelime[i]!='\0';i++)
	{
		sayac++;
	}

	printf("Kelimeniz %d harften olusmaktadir.",sayac);

	return 0;
}
