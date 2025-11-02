#include <stdio.h>
int main(){
    float myfloatnum = 3.5;
    printf("%f", myfloatnum); //output: 3.500000
    printf("\n");
    double mydouble = 19.99;
    printf("%lf", mydouble); //output: 19.990000
    printf("\n");
    printf("%.2lf", mydouble); //output: 19.99 only two digit 

    return 0;
}