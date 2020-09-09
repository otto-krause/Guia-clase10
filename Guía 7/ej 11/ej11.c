#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor, resto,  dividendo;

    printf("Ingrese el dividendo (entero positivo )");
    scanf("%d", &dividendo);
    printf("Ingrese el divisor (entero positivo) ");
    scanf("%d", &divisor);


        resto=dividendo;

        while ( resto>=divisor )
        {
            resto=resto-divisor;

        }
        printf("El resto de la division es %d", resto);
        return 0;
}
