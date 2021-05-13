#include <stdio.h>
int main()
{

    float numerodepersonas, numerodealimentos, porciones;
    printf ("\n\n Hernandez Acevedo Andrea");


    printf ("\n\n Programa 5");
    printf ("\n\n Dame el numero de personas"); 
    scanf ("%f", &numerodepersonas);  
    printf ("\n\n Dame el numero de alimentos disponibles");
    scanf ("%f", &numerodealimentos);
    porciones = numerodepersonas / numerodealimentos;
    printf ("\n La porcion para dividir equitativamente a cada persona es %f", porciones);

    return 0;
    
}