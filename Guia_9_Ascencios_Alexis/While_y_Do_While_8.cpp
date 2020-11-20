#include<stdio.h >
#include <stdlib.h>

int main()
{
 int Num=0,Positivos=0,Negativos=0,Cero=0,I=1;
 while(I<10)
{
  printf("\nIngrese un numero\n");
  scanf("%d",&Num);
  I=I+1;
  if (Num>0)
  {
  Positivos=Positivos+1;
  }
  else
  {
  	if (Num==0)
  	{
	 Cero=Cero+1;
	}
  else
  {
  	Negativos=Negativos+1;
  }
  }
}
 printf("La cantidad de positivos es: %d ,la de negativos es: %d y la de ceros es: %d",Positivos,Negativos,Cero);
return 0;
} 
