#include <stdio.h>

int main()
{
   int kenar_uzunlugu;
   int sayici1 = 1;
   int sayici2 = 0;

   printf("Karenin kenar uzunlugunu giriniz: ");
   scanf("%d",&kenar_uzunlugu);
   printf("\n\n");

   while(sayici1 <= kenar_uzunlugu)
   {
      while(sayici2 < kenar_uzunlugu)
      {
        printf("*");
        sayici2++;
      }
      if(kenar_uzunlugu == sayici2 )
      {
        sayici2 = 0;
      }
      printf("\n");
      sayici1++;
  }
  printf("\n");

  return 0;
}

