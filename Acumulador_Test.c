//
//  Acumulador_Test.c
//
//
//  Created by Nicholas Babo on 16/09/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arraySize = 300, i, j;
    long int repetition = 1000000000;
    float *array, c = 0.000000000001, acum = 0.f;
    
    array = malloc(arraySize * sizeof(float));
    
    for (i=0; i<arraySize; i++) {
        array[i] = c;
    }
    
    for (j=0; j<repetition; j++) {
        acum = 0.f;
        for (i=0; i<arraySize; i++) {
            acum += array[i];
        }
    }
    
    free(array);
    return 0;
}



