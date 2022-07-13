// Implemente a função
// void quebra_real(double n, int &parte_inteira, double &parte_decimal)
// que recebe um valor real n e retorna sua parte inteira e sua parte decimal.
#include <stdio.h>
void quebra_real(double n, int &parte_inteira, double &parte_decimal)
{
    parte_inteira = (int)n;
    parte_decimal = n - parte_inteira;
}

int main()
{
    double n, parte_decimal;
    int parte_inteira;
    printf("Digite um numero: ");
    scanf("%lf", &n);

    quebra_real(n, parte_inteira, parte_decimal);
    printf("Parte inteira: %d", parte_inteira);
    printf("\nParte decimal: %lf", parte_decimal);
}
