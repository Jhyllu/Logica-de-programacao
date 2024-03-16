#include <stdio.h>

#define PORCENT 0.10

int main()
{
    float valorGasto, gorjeta, total;
    printf("Informe o valor gasto: ");
    scanf("%f", &valorGasto);
    
    gorjeta = valorGasto * PORCENT;
    total = valorGasto + gorjeta;
    printf("O valor total é %.2f, com uma gorjeta de %.2f", total, gorjeta);
}
