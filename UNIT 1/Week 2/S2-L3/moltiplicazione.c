#include <stdio.h>

int main()
{


// MOLTIPLICAZIONE TRA DUE NUMERI

    int numero_a;    //variabile 'numero_a' è un numero intero 
    int numero_b;    //variabile 'numero_b' è un numero intero

    printf("Inserire il primo numero:\n");
    scanf("%d", &numero_a);   //è l'input che l'interprete legge dall'utente

    printf("Inserire il secondo numero:\n");
    scanf("%d", &numero_b);   //è l'input che l'interprete legge dall'utente

    printf("Moltiplicazione: %d\n", numero_a * numero_b); //

    return 0;    //termine del programma


}
