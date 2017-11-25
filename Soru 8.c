#include <stdio.h>

int main()
{
	float yaricap,Asonuc,Csonuc;

	printf("Cevresi ve alani hesaplanacak cemberin yaricapini giriniz: ");
	scanf("%f",&yaricap);

	Csonuc = (2*3.14*yaricap);
	Asonuc = (3.14*(yaricap*yaricap));

	printf("Girdiginiz %.1f yaricapli cemberin Cevresi %.2f , Alani %.2f \'dir.",yaricap,Csonuc,Asonuc);

	return 0;
}
