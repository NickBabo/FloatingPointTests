//
//  FastMathTests.c
//  
//
//  Created by Nicholas Babo on 16/09/18.
//

#include <stdio.h>

int main(){
    
    float nan1 = 0.0/0.0;
    
    float nan2 = 0.0/-0.0;
    
    printf("0/0 = %f \n" , nan1);
    
    printf("0/-0 = %f \n", nan2);
    
    float a = 1.0/0.0;
    
    float b = 1.0/-0.0;
    
    printf("1/0 = %f \n" , a);
    
    printf("1/-0  = %f \n" , b);
    
    float aPlusb = a+b;
    
    float aMinusb = a-b;
    
    float aTimesb = a*b;
    
    float aSlashb = a/b;
    
    printf("a + b = %f \n", aPlusb);
    
    printf("a - b = %f \n", aMinusb);
    
    printf("a * b = %f \n", aTimesb);
    
    printf("a / b = %f \n", aSlashb);
    
    float c = 0.165674;
    
    float d = 1.0000019;
    
    float e = 1.0000001;
    
    
    float sumResult;
    
    float sumResult2;
    
    float multResult = 1.0;
    
    float multResult2 = 1.0;
    
    int i, j, k, l;
    
    for (i=0; i<1000; i++) {
        sumResult += c;
    }
    
    for (j=0; j<1000; j++) {
        multResult *= d;
    }
    
    for (k=0; k<1000; k++) {
        multResult2 *= e;
    }
    
    for (l=0; l<1000; l++) {
        sumResult2 += e;
    }
    
    printf("Acumulador Soma = %.24f \n" , sumResult);
    
    printf("Acumulador Soma: 1000x = %.24f \n", c*1000);
    
    printf("Acumulador Soma2 = %.24f \n" , sumResult2);
    
    printf("Acumulador Mult = %.24f \n" , multResult);
    
    printf("Acumulador Mult2 = %.24f \n" , multResult2);
    
    return 0;
}
