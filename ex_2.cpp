#include <stdio.h>
 int digitos(int numero)
 {
    int cont = 0;
    bool continuar = true;
    while (continuar == true)
    {
        if (numero / 10 != 0)
        {
            cont++;
            numero = numero / 10; 
        }
        else
            continuar = false;
    }

    return cont;
 }

 int main()
 {
    int n, x;
    printf("Digite um numero: ");
    scanf("%d", &n);

    //12345 / 10 = 1234 / 10 = 123 / 10 = 12 / 10 = 1 / 10 = 0
    x = digitos(n);

    printf("\n%d digitos", x + 1);
 }
