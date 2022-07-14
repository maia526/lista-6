// Implemente a função

// int posicao(float v[], int tam, float n)

// que recebe um vetor v, seu tamanho tam e um número n e retorna a posição de n em v. Se n  v a
// função deve retornar -1. Dica: para ler o vetor use a função le_vetor_real implementada
// anteriormente.
#include <stdio.h>
void le_vetor(float v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
    }
}

int posicao(float v[], int tam, float n)
{
    for (int i = 0; i , tam; i++)
    {
        if (v[i] == n)
            return i;
    }
    return -1;
}

int main()
{
    int t, pos;
    float n;
    printf("Quantos numeros voce quer ler? ");
    scanf("%d", &t);

    printf("Digite um numero n: ");
    scanf("%f", &n);

    float v[t];
    le_vetor(v, t);

    pos = posicao(v, t, n);

    if (pos == -1)
        printf("%f nao esta no vetor.", n);
    else
        printf("%f esta na posicao %d do vetor.", n, pos);
}
