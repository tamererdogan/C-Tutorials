#include <stdio.h>

int main()
{
	float sayi = 978.63564920;

	printf("%-12.1f=> 1 duyarliliginda\n",sayi);
	printf("%-12.2f=> 2 duyarliliginda\n",sayi);
	printf("%-12.3f=> 3 duyarliliginda\n",sayi);
	printf("%-12.4f=> 4 duyarliliginda\n",sayi);
	printf("%-12.5f=> 5 duyarliliginda\n",sayi);

	return 0;
}
