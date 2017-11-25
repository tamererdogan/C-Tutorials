#include <stdio.h>

int main()
{
	int sayac=0;
	char kelime[10];

	printf("Kelime giriniz: ");
	scanf("%s",kelime);

	for(int i=0;kelime[i]!='\0';i++)
	{
		if(kelime[i]=='a')
		{
			sayac++;
		}
	}

	printf("Kelimenizde %d tane a harfi vardir",sayac);

	return 0;
}
