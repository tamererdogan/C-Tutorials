#include <stdio.h>

int main()
{
	int sayiToplam = 1;

	for(int i=3; i<=300; i+=2)
	{
		printf("%d + %d = ",sayiToplam,i);
		sayiToplam += i;
		printf("%d\n",sayiToplam);
	}

	return 0;
}
