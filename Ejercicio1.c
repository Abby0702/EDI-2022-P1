#include<stdio.h>

//Escriba un programa que pida el precio de un producto (puede tener decimales) y el porcentaje de descuento.  
//Calcule el precio del producto con el descuento y lo imprima con 2 decimales.  
//Por ejemplo:  Si el usuario captura el precio de 99.99 y el 25 por ciento de descuento, el programa debe de decir que el precio con descuento es:  74.99. 

int main()
    {
        float precio;
        float desc;
        float precioF;

        printf("¿Cual es el precio original del producto?");
        scanf("%f",&precio);

        printf("¿Cual es el descuento del producto?");
        scanf("%f", &desc);

        precioF = precio - (precio / 100 * desc);
        printf("El precio con descuento es de $%.1f ",precioF);

        return 0;


    }