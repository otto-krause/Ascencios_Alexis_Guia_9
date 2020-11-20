#include<stdio.h >
#include <stdlib.h>


int main()
{
 int num1=0,num2=0,I;
 printf("Ingrese 2 numeros \n");
 scanf("%d",&num1);
 scanf("%d",&num2);
 I=num1;
 while(I<num2)
 {  
 printf("%d\n",I);
 I=I+1;
 }
return 0;
}
