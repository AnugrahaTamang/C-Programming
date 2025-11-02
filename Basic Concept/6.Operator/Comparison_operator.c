#include <stdio.h>
int main(){
    int a = 12;
    int b = 10;
    printf("%d\n", a == b); //output: 0
    printf("%d\n", a>b); //output: 1 true
    printf("%d\n", a!=b); //output: 1
    printf("%d\n",a<b); //output: 0
    printf("%d\n", a>=b); //output: 1
    printf("%d\n", a<=b); //output: 0
    return 0;
}