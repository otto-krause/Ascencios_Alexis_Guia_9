#include<stdio.h >
#include <stdlib.h>


int main()
{
 int Num1=0, Num2=0, potencia=1, I=1;
 printf("Ingrese base \n");
 scanf("%d",&Num1);
 printf("Ingrese exponente \n");
 scanf("%d",&Num2);
 while(I<=Num2)
 {  
  potencia=potencia*Num1;
  I++;
 }
 printf("El total es %d\n",potencia);
return 0;
}   
