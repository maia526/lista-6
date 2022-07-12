// Implemente a função

// int reverso(int n)

// que recebe um valor inteiro n e retorna o mesmo número com seus dígitos invertidos. Por exemplo,
// se n = 7631, a função deve retornar 1367.

#include <stdio.h>
#include <math.h>
int reverso(int n)
{
    int cont = 1;
    bool continuar = true;
    int temp = n;
    //obter quantos digitos tem o numero
    while (continuar)
    {
        if (n / 10 != 0)
        {
            cont++;
            n = n / 10; 
        }
        else
            continuar = false;
    }
    
    int reverso = 0;
    for (int i = 0; i < cont; i++)
    {
        reverso += (temp % 10) * pow(10, cont - (i + 1));
        temp = temp / 10;
    }
    return reverso;
}

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\n%d", reverso(n));
}

    
