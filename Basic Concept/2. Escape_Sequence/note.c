#include <stdio.h>
int main(){
    printf("apple");
    printf("banana");
    printf("mango");
    //output: applebananamango
    //power of \n
    printf("apple"); printf("\n");
    printf("banana"); printf("\n");
    printf("mango"); printf("\n");
    //short way to write 
    printf("apple\n");
    printf("banana\n");
    printf("mango\n");
    //very short way
    printf(" apple \n banana \n mango \n orange \n");
    //if we have to need output formatting like this -> one, two, three, four
    //we have to care about the \t - tab character 
    printf("one\t");
    printf("two\t");
    printf("three\t");
    printf("four\t");
    return 0;
}