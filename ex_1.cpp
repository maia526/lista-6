// Implemente a função

// void segundo_grau(float a, float b, float c)

// que recebe os valores a, b e c de uma equação do segundo grau (ax2 + bx + c = 0) e imprime as
// duas raízes da equação. Se não for possível calcular as duas raízes, então a função deve imprimir
// “Não há raízes”.

#include <stdio.h>
#include <math.h>
void segundo_grau(int a, int b, int c)
{
    int raiz1, raiz2, delta;
    delta = b * b - (4 * a * c);

    if (delta < 0)
        printf("\nNao ha raizes.");
    if (delta == 0)
    {
        raiz1 = (- b) / 2 * a;
        printf("\nRaiz: %d", raiz1);
    }
    if (delta > 0)
    {
        raiz1 = (- b - sqrt(delta)) / 2 * a;
        raiz2 = (- b + sqrt(delta)) / 2 * a;
        printf("\nRaiz 1: %d", raiz1);
        printf("\nRaiz 2: %d", raiz2);
    }
}

int main()
{
    float a, b, c;
    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    segundo_grau(a, b, c);
}
