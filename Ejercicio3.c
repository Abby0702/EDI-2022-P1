#include<stdio.h>

//Escribe un programa que pida al usuario la cantidad de segundos e imprima el número de días, horas, minutos y segundos que son.

int main()
{
    int totseg, seg, dias, horas, min;
    int SegD=86400, SegH=3600, SegM=60;

    printf("Ingrese la cantidad de segundos");
    scanf("%d", &totseg);

    dias= totseg/SegD;
    totseg=totseg % SegD;

    horas= totseg/SegH;
    totseg=totseg % SegH;

    min= totseg/SegM;
    totseg=totseg % SegM;

    seg=totseg;

    printf("Son %d días");
    printf("\n",dias);

    printf("Son %d horas",horas);
    printf("\n");

    printf("Son %d minutos",min);
    printf("\n");

    printf("Son %d segundos",seg);
    printf("\n");


    return 0;
}