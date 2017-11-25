#include <stdio.h>

int main()
{
	int sayi[10];

	for(int i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayi[i]);
	}

	for(int k=0;k<10;k++)
	{
		printf("Eleman[%d]: %d\n",k,sayi[k]);
	}

	return 0;
}
