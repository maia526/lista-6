// Implemente a função

// bool amigos(int x, int y)

// que retorna true ou false indicando se os números x e y são amigos ou não. x e y serão amigos se a
// soma dos divisores próprios de x for igual a y e se a soma dos divisores próprios de y for igual a x.

// 2
// Dica 1: divisores próprios são os divisores de um número sem contar com ele mesmo. Os divisores
// próprios de 6 são 1, 2 e 3.
// Dica 2: use a função implementada no exercício anterior.
// Dica 3: 1184 e 1210 são amigos.

#include <stdio.h>
int quantidadeDivisores(int num)
{
    //retorna a quantidade de divisores que o número tem
    int temp = 0;
    for (int i = 1; i < num; i ++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
    return temp;
}

bool amigos(int x, int y)
{
    //achar quantos divisores tem x e y;
    int cont1, cont2;
    cont1 = quantidadeDivisores(x);
    cont2 = quantidadeDivisores(y);
    //colocar os divisores nos vetores
    int div_x[cont1], div_y[cont2], a = 0;
    for (int i = 1; i < x; i ++)
    {
        if (x % i == 0)
        {
            div_x[a] = i;
            a++;
        }
    }
    a = 0;
    for (int i = 1; i < y; i ++)
    {   
        if (y % i == 0)
        {
            div_y[a] = i;
            a++;
        }
    }
    int soma_x = 0, soma_y = 0;
    //somar os números de cada vetor
    for (int i = 0; i < cont1; i++)
    {
        soma_x += div_x[i];
    }

    for (int i = 0; i < cont2; i++)
    {
        soma_y += div_y[i];
    }

    //comparar soma de x[] com y e soma de y[] com x e retornar true se forem iguais e false se forem diferentes
    if (soma_x == y && soma_y == x)
        return true;
    else
        return false;
}

int main()
{
    //lê x e y
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite y: ");
    scanf("%d", &y);

    //verificar se são amigos
    bool camaradas = true;
    camaradas = amigos(x, y);

    if (camaradas)
        printf("Sao amigos");
    else
        printf("Nao sao amigos");
}
