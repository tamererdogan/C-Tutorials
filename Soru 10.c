#include <stdio.h>

int main()
{
	int son;
	int enBuyuk;
	int sayi[6];

	for(int i=1;i<6;i++)
	{
		printf("%d. sayiyi gir: ",i);
		scanf("%d",&sayi[i]);
	}

	for(int j=1; j<6;j++)
	{
		enBuyuk=0;
		for(int k=1;k<6;k++)
		{
			if(sayi[j] > sayi[k])
			{
				enBuyuk++;
			}
		}

		if(enBuyuk == 4)
		{
			printf("En buyuk sayi: %d",sayi[j]);
			break;
		}
	}

	return 0;
}
