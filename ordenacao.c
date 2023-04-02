/*========= IMPLEMENTACAO DAS FUNCOES =========*/

#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "vet.h"

/*=========================  bubbleSort  =========================*/
int bubbleSort(int n, int* v) {
    for (int i = n - 1; i > 0; i--){
        int troca = 0;
        for (int j = 0; j < i; j++){
            if (v[j] > v[j+1]){
                int tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
                troca = 1;
            }
        }
        if (!troca)
            return troca;
    }
};