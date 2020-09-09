#include <stdio.h>
#include <stdlib.h>


int main() {
	int factura,cantidad,precio_uni,n_producto,p_mas_v,mas_v,valor_total;
	printf("\n Ingrese la factura ");
	scanf("%d",&factura);
	 while (factura!=999){
		printf("\n Ingrese la cantidad ");
		scanf("%d",&cantidad);
		printf("\n Ingrese el precio unitario ");
		scanf("%d",&precio_uni);
		printf("\n Ingrese el numero de producto ");
		scanf("%d",&n_producto);
				valor_total=cantidad*precio_uni;
					if (valor_total>mas_v){
						mas_v=valor_total;
					}
					if (cantidad>p_mas_v) {
					p_mas_v=n_producto;
				}


	printf("\n Ingrese la factura ");
	scanf("%d",&factura);
	}
	printf("\n El mayor importe fue %d ",mas_v);
	printf("\n El producto mas vendido fue %d ",p_mas_v);
	return 0;
}
