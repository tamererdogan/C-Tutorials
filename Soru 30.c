#include <stdio.h>

int main()
{
	int a = 1;

	while(a <= 50)
	{
		printf("%d",a);
		if(a%6 == 0)
		{
			printf("\n");

		}else
		{
			printf("\t");
		}
		a++;
	}

	return 0;
}
