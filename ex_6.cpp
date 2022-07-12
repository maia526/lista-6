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
int retornaQuantidade(int num)
{
    int cont = 1;
    bool continuar = true;
    int temp = num;
    //obter quantos digitos tem o numero
    while (continuar)
    {
        if (num / 10 != 0)
        {
            cont++;
            num = num / 10; 
        }
        else
            continuar = false;
    }
    return cont;
}

bool amigos(int x, int y)
{

    retornaQuantidade(x);
    retornaQuantidade(y);

    
}

int main()
{
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite y: ");
    scanf("%d", &y);

    bool sim;

    sim = amigos(x, y);
}
