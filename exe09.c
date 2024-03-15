/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define PORCENT 0.10

int main()
{
    float valorGasto, gorjeta;
    printf("Informe o valor gasto: ");
    scanf("%f", &valorGasto);
    
    gorjeta = valorGasto * porcent;
    printf("O valor da gorjeta é: %.2f", gorjeta);
}
