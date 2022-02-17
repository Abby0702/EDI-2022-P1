#include <stdio.h>


int main ()
{
    int hora, min, op;

    do {

        printf("Ingresa la hora (24hrs): ");
        scanf("%d,", &hora);
        printf("Ingresa los minutos: ");
        scanf("%d,", &min);

        if (hora >= 0 && hora<= 11 && min<=59)
            printf("¡Buenos dias estrellitas, la tierra les dice hola!:");

        else if (hora >= 12 && hora <= 17 && min<=59)
            printf("¡Buenas tardes!");

        else if  (hora >= 18 && hora <= 23 && min<=59)
            printf("Buena noshe");


        printf("\n Regresar (1--Si,  0--No)");
        scanf("%d,", &op);

    } while (op==1);

    printf("Hasta luegooooo");
    return 0;


}