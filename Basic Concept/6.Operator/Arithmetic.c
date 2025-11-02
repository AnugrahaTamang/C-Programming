#include <stdio.h>
int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    printf("%d\n", a*b/c+a-c%b);  //output: is 0
    int num = 2;
    printf("%d\n", ++num); //output: 3
    printf("%d\n", --num); //output: 2
    return 0;
}