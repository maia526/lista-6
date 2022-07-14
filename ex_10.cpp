// Implemente a função

// void le_vetor_real(float v[], int tam)

// para ler um vetor de números reais v de tamanho tam.
#include <stdio.h>
void le_vetor(float v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
    }
}

int main()
{
    int n;
    printf("Quantos numeros voce quer ler? ");
    scanf("%d", &n);

    float v[n];
    le_vetor(v, n);

    for (int i = 0; i < n; i++)
        printf("\n%f", v[i]);
}
