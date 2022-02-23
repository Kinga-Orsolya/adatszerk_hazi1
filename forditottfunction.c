//
// Created by user on 2/23/2022.
//

#include "forditottfunction.h"
#include <stdio.h>
void reverse(int tomb3[], int elso, int utolso) {
    int temp;
    while (elso < utolso) {
        temp = tomb3[elso];
        tomb3[elso] = tomb3[utolso];
        tomb3[utolso] = temp;
        elso++;
        utolso--;
    }
}
void uj(int tomb3[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d \n", tomb3[i]);
    }
}


