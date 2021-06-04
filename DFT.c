#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
    int N=4, n, k, S;
    int *A = (int*)malloc(N*N*sizeof(int));
          
    int x[] = {1, 2, 1, 0};
    int X[N];
    /*
    for(k=0;k<N;k++) {
        for(n=0;n<N;n++) {
            X[k] = x[n]*2;
        }
        printf("%3d", X[k]);
    }
    printf("\n");
    */
    
    int i,j;
    for(j=0; j<N; j++) {
        for(i=0; i<N; i++) {
            A[i+N*j]=i+N*j;
            printf("%5d", A[i+N*j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
