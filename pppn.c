//
// Created by user on 2/22/2022.
//

#include <stdio.h>
#include "pppn.h"

int paros(int tomb2[], int m){
    int i, parosszam = 0;
    for (i = 0; i < m; i++) {
        if (tomb2[i] % 2 == 0) {
            printf("%d\n", tomb2[i]);
            parosszam++;
        }
    }
        return parosszam;
    }

int paratlan(int tomb2[], int m){
    int i, paratlanszam = 0;
    for (i = 0; i < m; i++) {
        if (tomb2[i] % 2 != 0) {
            printf("%d\n", tomb2[i]);
            paratlanszam++;
        }
    }
        return paratlanszam;
    }
int pozneg(int tomb2[], int m) {
    int i, pozitiv = 0, negativ = 0;
    for (i = 0; i < m; i++) {
        if (tomb2[i] > 0) {
            //printf("%d\n", tomb2[i]);
            pozitiv++;
        }


        if (tomb2[i] < 0) {
            //printf("%d\n", tomb2[i]);
            negativ++;
        }

    }
    return pozitiv;
    return negativ;
}