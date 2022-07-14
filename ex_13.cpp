// Implemente a função

// bool pertence(int v[], int tam, float n)

// que recebe um vetor v, seu tamanho tam e um número n e retorna true se n  v, ou false, caso
// contrário. Dica: para ler o vetor use a função le_vetor implementada em sala de aula.
#include <stdio.h>
void le_vetor(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

bool pertence(int v[], int tam, float n)
{
    for (int i = 0; i < tam; i++)
    {
        if (v[i] == n)
            return true;
    }
    return false;
}


int main()
{
    int t;
    bool dentro;
    printf("Quantos numeros voce quer ler? ");
    scanf("%d", &t);

    int v[t];
    le_vetor(v, t);
    float n;
    printf("Digite um numero n: ");
    scanf("%f", &n);

    dentro = pertence(v, t, n);
    if (dentro == true)
        printf("Esta dentro.");
    else
        printf("Nao esta dentro.");
}
