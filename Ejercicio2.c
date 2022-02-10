#include<stdio.h>

//Escribe un programa que pida al usuario días, horas y minutos.  Calcule la cantidad total de segundos y los imprima como en el ejemplo

int main()
{
    int SegD=86400, SegH=3600, SegM=60;
    int dias, horas, min, totSeg;

    printf("¿Cuantos días?");
    scanf("%d",&dias);

    printf("¿Cuantas horas?");
    scanf("%d", &horas);

    printf("¿Cuantos minutos?");
    scanf("%d", &min);

    totSeg = (SegD*dias) + (SegH*horas) + (SegM*min);
    printf("Son %d segundos",totSeg);

    return 0;


}