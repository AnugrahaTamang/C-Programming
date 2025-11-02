#include <stdio.h>
int main(){
    float myfloat = 9;
    printf("%f\n", myfloat); //9.000000 implicit conversion
    int myint = 9.99;
    printf("%d\n", myint); //9 implicit conversion
    int num1 = 7;
    int num2 = 2;
    float sum = (float) num1/num2;
    printf("%f",sum); //output: 3.500000
    return 0;
}