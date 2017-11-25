#include <stdio.h>

int main()
{
	int sayi[5];

	for(int i=0;i<5;i++)
	{
		printf("%d.sayiyi giriniz: ",i+1);
		scanf("%d",&sayi[i]);
	}

	printf("\n");	

	for(int j=0;j<5;j++)
	{
		if(sayi[j] == 0)
		{
			printf("0 Sayisi ne negatif ne pozitiftir.");
		}
	    else
	    {
			if(sayi[j]>0)
			{
				printf("%d sayisi pozitiftir.\n",sayi[j]);
			}
			else
			{
				printf("%d sayisi negatiftir.\n",sayi[j]);
			}
		}
	}

	return 0;
}

