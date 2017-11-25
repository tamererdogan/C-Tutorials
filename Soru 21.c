#include <stdio.h>

float alanal(float yaricap)
{
	float alan = 3.14*(yaricap*yaricap);
	return alan;
}

int main()
{
	float yaricap;
	printf("Yaricap gir: ");
	scanf("%f",&yaricap);
	float alan = alanal(yaricap);
	printf("Alan: %.1f",alan);

	return 0;
}
