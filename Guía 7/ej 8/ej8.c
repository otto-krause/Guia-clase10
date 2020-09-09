#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num1;
    int mult;
    int i=1;
    int suma;
    printf("ingrese un numero\n");
    scanf("%d",&num);
    printf ("ingrese el segundo numero\n");
    scanf("%d",&num1);
    while (5*i<num)
       i++;

    mult=5*i;

    while (mult<num1){
        printf(" %d ",mult);
        if(mult!=num)
            suma=suma+mult;
        mult=mult+5;

    }
    printf("\n La suma es %d ",suma);
    return 0;
}

