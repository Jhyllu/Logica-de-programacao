/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float largura, altura, area, potencia;
    
    printf("Insira a largura do cômodo: ");
    scanf("%f", &largura);
    
    printf("Insira a altura: ");
    scanf("%f", &altura);
    
    area = largura * altura;
    potencia = (largura * altura) * 18;
    
    printf("Na area de %.2f, é necessário %.2fW de potencia", area, potencia);

    return 0;
}
