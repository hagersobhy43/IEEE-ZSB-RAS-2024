#include <stdio.h>
int main(){
    typedef int INTEGER;
    typedef float FLOAT;
    typedef double DOUBLE;
    typedef char CHARACTER;

    printf("size of integer : %lu\n", sizeof(INTEGER));
    printf("size of float : %lu\n", sizeof(FLOAT));
    printf("size of double : %lu\n", sizeof(DOUBLE));
    printf("size of char : %lu\n", sizeof(CHARACTER));
    
    return 0 ;
}