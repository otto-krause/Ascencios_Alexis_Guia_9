#include<stdio.h >
#include <stdlib.h>

int main()
{
 int I=0;
 float Num, mayor, promedio, total; 
 while(I<15)
 {printf("ingrese un numero ");
  scanf("%f",&Num);
  total=total+Num;
  I=I+1;
  if (Num>mayor)
  {
	mayor=Num;	 
  }
 }
 promedio=total/15;
 printf("El valor promedio es %f\n", promedio);
 printf("El valor mayor %f", mayor);
return 0;
}
