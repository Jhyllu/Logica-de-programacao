/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define DOLAR 4.98;
int main()
{
    float qtdReais, qtdDolar;
    printf("Informe a quantidade de Reais: ");
    scanf("%f", &qtdReais);
    qtdDolar = qtdReais/DOLAR;
    printf("Você possui %.2f em dolares", qtdDolar);
    
}
