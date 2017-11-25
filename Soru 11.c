#include <stdio.h>

int main()
{
	int sayi;
	int i = 1;
	int sonuc=1;

	printf("Faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d",&sayi); 

	do{
		sonuc = sonuc * i;
		i++;
	}while(i<=sayi);

	printf("%d",sonuc);

	return 0;
}
