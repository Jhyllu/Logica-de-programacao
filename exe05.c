/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define PESOA 2
#define PESOB 3
#define PESOC 5

int main()
{
    float a, b, c, result;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &a);
    printf("Informe a segunda nota: ");
    scanf("%f", &b);
    printf("Informe a terceira nota: ");
    scanf("%f", &c);
    
    result = (a*PESOA) + (b*PESOB) + (c*PESOC) / (PESOA + PESOB + PESOC);
    printf("A média é %.2f", result);
    
}
