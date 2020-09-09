#include <stdio.h>
#include <stdlib.h>
 int main ()
 {
    int valor1,valor2,producto;
    printf( "\n   Introduzca primer n%cmero entero: ", 163 );
    scanf( "%d", &valor1 );
    printf( "\n   Introduzca segundo n%cmero entero: ", 163 );
    scanf( "%d", &valor2 );
     producto=0;
     if(valor1 >=0 && valor2 >=0)
     {


     for (int i=1; i<=valor2; i++)
     {
         producto= producto +valor1;
     }
      printf ("El producto es %d ",producto);
     }

     else

        printf ("Error");



     return 0;
 }
