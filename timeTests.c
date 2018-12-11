//
//  FastMathTests.c
//  
//
//  Created by Nicholas Babo on 16/09/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int arraySize = 300;
    
    long int repetition = 1000000000;

    float *array;
    
    int i, j;
    
    float a = 0.00002351235;
    float b = 0.000657821;
//    float c = 0.000000000001;
    double c = 0.000000000001;
    
    float valor = c;
    
    float acum = 0.f;
    
    array = malloc(arraySize * sizeof(float));
    if(array == NULL) {
        printf("Erro no malloc\n");
        exit(1);
    }
    
//    printf("%ld \n", repetition);
    
    for (i=0; i<arraySize; i++) {
        array[i] = valor;
    }
    
    for (j=0; j<repetition; j++) {
        acum = 0.f;
        for (i=0; i<arraySize; i++) {
            acum += array[i];
        }
//        printf("Resultado Parcial: %f \n", acum);
    }
    
    
    printf("Resultado: %.16f \n", acum);
//
    printf("Na mão -- %i * %.16f = %.16f \n", arraySize, valor,valor * arraySize);
//
    printf("Diferença = %.32f \n", ((valor * arraySize) - acum));
    
    free(array);
    return 0;
}
