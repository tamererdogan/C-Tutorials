#include <stdio.h>

int main()
{
	int sayi;

	printf("Pozitif bir sayi giriniz: ");
	scanf("%d",&sayi);

	basaSar:

	if(sayi >= 0)
	{
		for(int i=sayi;i>=0;i--)
	    {
			if(i != 0)
			{
				printf("%d > ",i);
			}
			else
			{
				printf("%d",i);
			}
	    }
	}
	else
	{
		printf("Negatif bir sayi girdiniz. Lutfen pozitif bir sayi giriniz: ");
		scanf("%d",&sayi);
		goto basaSar;
	}

	return 0;
}
