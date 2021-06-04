#include <complex.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
    int N=4;
    //int *A = (int*)malloc(N*N*sizeof(int));
          
    float complex x[] = {1, 2, 1, 0};
    float complex X[] = {0, 0, 0, 0};
    
    float pi = acos(-1);
    int k, n;
    float complex prod;
    for(k=0;k<N;k++) {
        for(n=0;n<N;n++) {
            prod = x[n]*cexp(-I*2*pi*n*k/N);
            X[k] += prod ;
        }
        printf("X[%d] =%5.1f + %5.1fi\n", k, creal(X[k]), cimag(X[k]));
    }
    
    
    
    /*
    int i,j;
    for(j=0; j<N; j++) {
        for(i=0; i<N; i++) {
            A[i+N*j]=i+N*j;
            printf("%5d", A[i+N*j]);
        }
        printf("\n");
    }
    */
    
    return 0;
}
