#include <stdio.h>
    #include <stdlib.h>

int main()
{
    int divisor, i, cociente, dividendo;

    printf("Ingrese el dividendo (entero positivo) ");
    scanf("%d", &dividendo);
    printf("Ingrese el divisor (entero positivo) ");
    scanf("%d", &divisor);

        cociente=0;
        i=dividendo;

        while ( i>=divisor )
        {
            i=i-divisor;
            cociente++;
        }
        printf("El resultado de la division es %d / %d = %d", dividendo, divisor, cociente);
        return 0;
}
