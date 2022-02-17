#include <stdio.h>

int main ()
{
    float precio=30;
    float kg, total;
    int op;


    do {
        printf("Cantidad de Kilos de manzana: \n ");
        scanf("%f,", &kg);


        if (kg >= 0 && kg <= 2) {
            printf("No Aplica, precio normal \n");
            total = precio * kg;
            printf("El total es de %f \n", total);
        }
        else if (kg >= 2.01 && kg <= 5) {
            printf("Obtienes un 10 de descuento \n");
            total=(precio *kg)-(((precio * kg) * 10)/100);
            printf("\n El precio con descuento es %.2f \n", total);
        }
        else if (kg >= 5.01 && kg <= 10) {
            printf("Obtienes un 15 de descuento \n");
            total = (precio *kg) - (((precio * kg) * 15)/100);
            printf("\n El precio con descuento es %.2f \n", total);
        }
        else if (kg >= 10) {
            printf("Obtienes un 20 de descuento \n");
            total = (precio *kg) - (((precio * kg) * 20)/100);
            printf("\n El precio con descuento es %.2f \n", total);
        }

        printf("\n Para ingresar otra cantidad de Kg ingrese 1, de lo contrario 0 \n");
        scanf("%d,", &op);

    } while (op == 1);

    printf("Gracias por comprar aquí");

    return 0;
}
