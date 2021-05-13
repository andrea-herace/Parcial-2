#include <stdio.h>
int main()
{

    float peso, altura, IMC;
    printf ("\n\n Hernandez Acevedo Andrea");

    printf ("\n\n Programa 7");
    printf ("\n\n Calcula el indice de masa corporal");
    printf ("\n\n Dame el peso");
    scanf ("%f", &peso);  
    printf ("\n\n Dame la altura");
    scanf ("%f", &altura);  
    IMC = (peso/altura);
    printf ("\n La masa muscular es %f", IMC);

    return 0;
    
}