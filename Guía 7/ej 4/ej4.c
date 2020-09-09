#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont1,i, alumno=0, cont2=0,cont3=0, cont4=0,promedio_mayor=0, mayor_alumno;
float promedio=0, promg=0,acu=0,acu1=0,nota=0,nota_tp=0;

i=1;
do
{
    printf("\nIngrese la nota de TP del alumno %d\n", i);
    scanf("%f", &nota_tp);
    cont1=cont1+1;
    printf("Ingrese las notas de actividades del mismo (para poder finalizar ingresar un numero negativo)\n");

do
{
scanf("%f", &nota);
if (nota>0)
{
cont1=cont1+1;
acu=acu+nota;
            }
            if(cont1<3)
            {
                cont2=cont2+1;
            }
}
while(nota>0);
acu=acu+nota_tp;
        promedio=acu/cont1;
        printf("El promedio del alumno %d es %.1f\n", i, promedio);
        acu1=acu1+promedio;
        if (promedio>promedio_mayor)
        {
            promedio_mayor=promedio;
            mayor_alumno=i;
        }
        if (nota_tp>5)
        {
            cont4=cont4+1;
        }

        i++;
}while (i<51);
promg=acu1/i;
printf("\nEl promedio general del curso es %.1f\n", promg);
printf("El alumno con mayor promedio es el alumno %d\n", mayor_alumno);
    printf(" los alumnos con menos notas ingresadas son %d\n", cont2);
    printf("Los alumnos que aprobaron el TP son %d", cont4);




    return 0;
}


