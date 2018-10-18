#include <stdio.h>
#include <gsl/gsl_ieee_utils.h>

int main(){
    float f = 2;

    for(int i = 1; i > -151; i--){
        printf ("2^%d=", i); gsl_ieee_printf_float(&f);
        printf ("\n");
        f = f / 2;
    }

    return(0);
}
