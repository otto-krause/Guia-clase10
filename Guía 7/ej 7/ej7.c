#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numero=0;
printf("Ingrese un numero positivo ");

    scanf("%d",&numero);
    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",numero, i, numero*i);
    return 0;
}
