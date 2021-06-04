#include <stdio.h> 
#include <complex.h> 
#include <math.h> 
int main(void)  
{ 
    double pi = acos(-1); 
    double complex a[] = {pi, I*0.5*pi, -pi, -I*pi}; 
    for(int n = 0; n < 4; n++) { 
        double complex z = cexp(a[n]); 
        printf("% .1f + % .1fi\n", creal(z), cimag(z)); 
    } 
} 
