#include<stdio.h >
#include <stdlib.h>

int main()
{
 int Sueldos=0,Cant1=0,Cant2=0,I=0;
 do
 {
  printf("\nIngrese el sueldo\n");
  scanf("%d",&Sueldos);
  I++;
  if (Sueldos>2000)
  {
  Cant1=Cant1+1;
  }
  else
  {
  Cant2=Cant2+1;
  }
  }
 while(I<20); 
 printf("\n%d personas ganas mas de 2000 y %d personas ganan menos de 2000",Cant1,Cant2);
return 0;
}
