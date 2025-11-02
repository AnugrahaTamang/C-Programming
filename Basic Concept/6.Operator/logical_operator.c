#include <stdio.h>
int main(){
    int num1 = 1;
    int num2 = 0;
    printf("%d\n",num1 && num2); //output: 0
    printf("%d\n", num1 || num2); //output: 1
    printf("%d\n", !num2); //output 1
    return 0;
}