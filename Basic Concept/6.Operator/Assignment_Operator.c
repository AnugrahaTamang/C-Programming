#include <stdio.h>
int main(){
    int a = 4;
    printf("%d\n", a);
    printf("%d\n", a+=2); //output: 6
    printf("%d\n", a-=3); //output: 3
    printf("%d\n", a*=2); //output: 6
    printf("%d\n", a/=3); //output: 2
    printf("%d\n", a%=2); //output: 0
    int b = 5;
    printf("%d\n", b&=7); //output:  5
    printf("%d\n", b|=2); //output: 7
    printf("%d\n", b^=3); //output: 4
    int c = 3;
    printf("%d\n", c>>=2); //ouput 0
    int d = 4;
    printf("%d\n", d<<=2); //output: 16
    return 0;
}