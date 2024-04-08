#include <stdio.h>
void increment( int x){
    x++;
    printf("%d", x);
}
int main(){
    int (*ptr)(int) = &increment; //create a pointer to the function
    (*ptr)(10); // pass the value to the function through the pointer
    
}
//another solution
/*int *increment(int x){
    x++;
    return &x;
}
int main(){
    int x = 10;
    int *ptr = increment(x);
    printf("%d",*ptr);
}*/