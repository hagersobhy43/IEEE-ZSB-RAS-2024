#include <stdio.h>
#define SIZEOF(variable) (char*)(&variable + 1) - (char*)(&variable)

int main(){
    int x;
    printf("size of x is : %d\n" , SIZEOF(x)); //i think its best case is that you can substitute any variable in this macros to calc its size
    printf("size of integer: %lu", sizeof(int)); //i think its best case when it is not used many times in the program 
}