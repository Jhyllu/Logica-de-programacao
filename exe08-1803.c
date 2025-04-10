
#include <stdio.h>

int main()
{
    float valorDiv, juros, total;
    printf("Insira o valor da divida: ");
    scanf("%f", &valorDiv);
    
    printf("Insira o valor do juros mensal: ");
    scanf("%f", &juros);
    
    total = valorDiv * (1.0+juros/100);
    printf("O valor da divida no próximo mês é %.2f", total);
    
}
