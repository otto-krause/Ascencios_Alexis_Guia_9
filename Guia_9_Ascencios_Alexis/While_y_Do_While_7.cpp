#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=0,v=1,Num1=0,p=0,U=0, General=0;
  do
  {
    U=0;
    printf ("\nEl vendedor: %d \n",v);
    printf ("Ingresar las unidades vendidas  \n");
    v++;
    i=0;
    p=0;
	do
	{
    printf ("\nventa del dia  %d\n",i+1);
    scanf ("%d",&U);
    p=p+U;
	if (p > Num1)
        Num1=p;
        i ++;
	}
	while(i<15);
	General=General+p;
	printf ("\nEL total  de unidades vendidas  del vendedor  %d es %d \n",v-1, p);
  }
  while (v<21);
  printf("\nLa venta general es %d y la mejor venta es por %d",General,Num1);
  return 0;
}
