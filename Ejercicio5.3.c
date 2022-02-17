#include <stdio.h>


int main ()
{
    float l1,l2,l3;
    int op;

    do {

        printf("Ingresa lado 1: ");
        scanf("%d,", &l1);
        printf("Ingresa lado 2: ");
        scanf("%d,", &l2);
        printf("Ingresa lado 3: ");
        scanf("%d,", &l3);

        if ( l1 == l2 && l2 == l3 )
            printf("Es un triangulo equilatero");
        else if (l1 == l2 && l2 != l3)
            printf("Es un triangulo isosceles");
        else if  (l1 != l2 && l2 != l3 && l3 != l1)
            printf("Es un triangulo escaleno");

        printf("\n Presiona 1 para ingresar nuevas cantidades, de lo contrario 0");
        scanf("%d,", &op);

    } while (op == 1);

        printf("Hasta luegoooooo!");

    return 0;


}