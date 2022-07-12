// Implemente a função

// int conta_digitos(int n, int d)

// que recebe um valor inteiro n e retorna quantas vezes o dígito d (0 a 9) aparece no número n. Por
// exemplo, se n = 6764963 e d = 6 a função deve retornar 3.

#include <stdio.h>
int conta_digitos(int n, int d)
{
    //conta quantos dígitos tem o número
    int cont = 1;
    bool continuar = true;
    int temp = n;
    while (continuar == true)
    {
        if (n / 10 != 0)
        {
            cont++;
            n = n / 10; 
        }
        else
            continuar = false;
    }

    int v[cont], x = 0;
    continuar = true;
    while(continuar)
    {
        if (temp != 0)
        {
            v[x] = temp % 10;
            temp = temp / 10;
            x++;
        }
        else
            continuar = false;
    }

    int qtd = 0;
    for (int i = 0;  i < cont; i++)
    {
        if (v[i] == d)
            qtd++;
    }
    return qtd;
}

int main()
{
    int n, d, qtd;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("D: ");
    scanf("%d", &d);

    qtd = conta_digitos(n, d);
    printf("\n%d aparece %d vezes", d, qtd);
}
