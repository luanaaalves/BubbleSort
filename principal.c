#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vet.c"
#include <math.h>
#include "ordenacao.c"

int main (void) {

    srand(time(NULL));

     //para testar 20 minutos ou mais
    //int n = 840000;
    
    //para testar 20 vezes
    int n = 20000;
    int* vetor1 = criaVetorEmbaralhado(n);
    
    bubbleSort(n, vetor1);
    //imprimeVetor(vetor1, n);

}
