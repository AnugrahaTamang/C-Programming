#include <stdio.h>
int main(){
    int myint;
    float myfloat;
    double mydouble;
    char mychar;
    printf("%zu\n", sizeof(myint)); //4 byte
    printf("%zu\n", sizeof(myfloat)); // 4 byte
    printf("%zu\n", sizeof(mydouble)); // 8 byte
    printf("%zu\n", sizeof(mychar)); // 1 byte

    return 0;
}