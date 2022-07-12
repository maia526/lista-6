// Implemente a função

// int soma_divisores(int n)

// que retorna a soma dos divisores próprios de n. Dica: divisores próprios são os divisores de um
// número sem contar com ele mesmo. Os divisores próprios de 6 são 1, 2 e 3.

#include <stdio.h>
void soma_divisores(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("\n%d", i);
        }
    }
}

int main()
{
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    soma_divisores(n);
}
