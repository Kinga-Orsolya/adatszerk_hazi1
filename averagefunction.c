//
// Created by user on 2/22/2022.
//

#include "averagefunction.h"
float atlag(int tomb[], int n){
    int sum = 0;
    int i;
    for (i = 0; i < n; ++i) {
        sum += tomb[i];

    }
    return sum/(float)n;

}