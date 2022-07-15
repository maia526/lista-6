// Implemente a função

// bool colide_esfera(float x1, float y1, float r1, float x2, float y2, float r2)

// que retorna true se a esfera 1 de centro (x1, y1) e raio r1 está em posição de colisão com a esfera 2
// de centro (x2, y2) e raio r2, ou false, caso contrário.
#include <stdio.h>
#include <math.h>
bool colide_esfera(float x1, float y1, float r1, float x2, float y2, float r2)
{
    //se distancia entre x1, y1 e x2, y2 for menor que r1+r2, retornar true
    float dist;
    dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    
    if (dist < r1 + r2)
        return true;
    else
        return false;
}

int main()
{
    float x1, y1, r1, x2, y2, r2;
    //ler x1, y1, r1
    printf("X1 Y1 R1: ");
    scanf("%f %f %f", &x1, &y1, &r1);

    //ler x2, y2, r2
    printf("X2 Y2 R2: ");
    scanf("%f %f %f", &x2, &y2, &r2);
    //chamar função
    bool confirmar;
    confirmar = colide_esfera(x1, y1, r1, x2, y2, r2);

    //se true, imprime "colide", se não, imprime "nao colide"
    if (confirmar == true)
        printf("colide");
    if (confirmar == false)
        printf("nao colide");
}
