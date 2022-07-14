#include <stdio.h>
void le_vetor(float v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
    }
}

float maior(float v[], int tam)
{
    float maior;
    for (int i = 0; i < tam; i++)
    {
        if (i == 0)
            maior = v[i];
        else if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}

float menor(float v[], int tam)
{
    float menor;
    for (int i = 0; i < tam; i++)
    {
        if (i == 0)
            menor = v[i];
        else if (v[i] < menor)
            menor = v[i];
    }
    return menor;
}


int main()
{
    int t;
    printf("Quantos numeros voce quer ler? ");
    scanf("%d", &t);

    float v[t];
    le_vetor(v, t);

    printf("\nMaior: %f", maior(v, t));
    printf("\nMenor: %f", menor(v, t));
}
