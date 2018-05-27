#include <stdio.h>

/*
 * Se tien una serie de numeros desordenados.
 * Realiza una funcion que determine si la posicion de un numero
 */

int posicion(int n, int a[], int tam);


int main(void)
{
    int numeros[] = { 1, 10, -20, 500, 4000, 2, 23, 4, 4, 4, 11, 11, 2 };
    int tam = sizeof(numeros) / sizeof(int);
    int pos = posicion(10, numeros, tam);

    printf("Posicion: %d\n", pos);

    return 0;
}

int posicion(int n, int a[], int tam)
{
    int i;

    for (i = 0; i < tam; ++i)
        if (a[i] == n)
            return i;

    return -1;
}
