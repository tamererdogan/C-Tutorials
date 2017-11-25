#include <stdio.h>

int main()
{
	int sayi,mod;

	printf("Bir tam sayi giriniz: ");
	scanf("%d",&sayi);

	mod = sayi%2;

	
	if(sayi == 0)
	{
		printf("Girdiginiz sayi ne tek ne cifttir.");
	}
	else if(mod == 0)
	{
		printf("Girdiginiz sayi cifttir.");
	}
	else
	{
		printf("Girdiginiz sayi tektir.");
	}
	return 0;
}
