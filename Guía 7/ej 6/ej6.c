#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long numero, factorial=1;
    int i=0;
    printf("Ingrese un numero ");
    scanf("%llu", &numero);
    for (i=numero;i>1;i--) {
        factorial=factorial*i;
    }
        printf("El factorial de %llu es  %llu", numero, factorial);
}
