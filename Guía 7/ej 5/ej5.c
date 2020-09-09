#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed long int dni=0, nacimiento=0, menores=0 ;
    int i, hombres=0, cont=0, m30=0, pers_total=0 ;
    float porcentaje=0;
    char sexo;



do{
printf("Ingrese su DNI");
   scanf("%d", &dni);
   if (dni>0)
    {
  printf("Ingrese su sexo ");
   scanf("%s", &sexo);
printf("Ingrese su a%co de nacimiento\n",164);
scanf("%d", &nacimiento);
}

pers_total=pers_total+1;
menores=2020-nacimiento;
if (menores<18)
{
     cont=cont+1;
}

porcentaje=cont*100/pers_total;

if ((dni<30000000 &&(dni>0)))
    {
 m30=m30+1;
}

if (sexo=='h'){
hombres++;
}


}while (dni>0);




printf("Se ingresaron un total de %d mujeres y %d hombres \n", pers_total-hombres,hombres);

printf("Un %.1f %c son menores de edad",porcentaje, 37);

printf("%d personas tienen un DNI inferior a 30 millones",m30);



    return 0;
}
