#include <stdio.h>   // DIRETTIVA DEL PROCESSORE  
                     //deve caricare in memoria la libreria <stdio.h>, che contiene le definizioni 
                     //delle funzioni per l’input/output standard di un programma C.




int main()


{                      //le parentesi graffe aperte e chiuse indicano l'apertura e la chiusura di un blocco di codice.


// MEDIA ARITMETICA DI DUE NUMERI

    float numero_a;    //variabile 'numero_a' è un numero decimale                              //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;
    float numero_b;    //variabile 'numero_b' è un numero decimale                             //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;

    printf("Inserire il primo numero:\n");    //funzione print che stampa la stringa testuale                   //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;
    scanf("%f", &numero_a);                   //è l'input che l'interprete legge dall'utente                    //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;

    printf("Inserire il secondo numero:\n");   //funzione print che stampa la stringa testuale                 //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;
    scanf("%f", &numero_b);                    //è l'input che l'interprete legge dall'utente                  //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;

    float media = (numero_a + numero_b)/2;
    printf("La media dei due numeri e': %f\n", media);                                                       //OGNI RIGA DI CODICE DEVE TERMINARE CON   --->  ;

    return 0;    //termine del programma (valore di ritorno della funzione main)


}
