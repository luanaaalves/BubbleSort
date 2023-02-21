#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vet.h"
#include <math.h>
#include "ordenacao.h"

int main (void) {

    srand(time(NULL));

    int n = 840000;
    int* vetor1 = criaVetorEmbaralhado(n);
    
    bubbleSort(n, vetor1);
    //imprimeVetor(vetor1, n);

}