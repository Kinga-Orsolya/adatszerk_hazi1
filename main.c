#include <stdio.h>
#include "averagefunction.h"
#include "pppn.h"
#include "forditottfunction.h"

int main() {

    int tomb[] ={4, 13, 19, 29, 0};
    float avg = atlag(tomb, 5);
    printf("a tomb elemeinek atlaga: %f\n", avg);

    int tomb2[] = {-11, -7, 0, 35, 4, -9, 22};

    int parosszam, paratlanszam;
    parosszam = paros(tomb2, 7);
    paratlanszam = paratlan(tomb2, 7);
    printf("a tomb paros elemei = %d \n", parosszam);
    printf("a tomb paratlan elemei = %d \n", paratlanszam);

    int pozitiv, negativ;
    pozitiv = pozneg(tomb2, 7);
    negativ = pozneg(tomb2, 7);
    printf("a tomb + elemei = %d \n", pozitiv);
    printf("a tomb - elemei = %d \n", negativ);

    int tomb3[]={ 55, 4, 91, 486, 3, 7, 644, 81, 0, 74};
    int n = 10;
    reverse(tomb3, 0, n-1);
    printf("a forditott tomb alakja = : %d \n");
    uj(tomb3, n);



    return 0;
}
