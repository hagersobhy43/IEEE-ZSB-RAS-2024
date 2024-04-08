#include <stdio.h>
int main() {
    int i = 5, *p1 = &i;
    char h = 'H' , *p2 = &h;
    long j = 2000 , *p3 = &j;
    printf("%p , %p , %p \n", p1 , p2 , p3);
    printf("it will print the addresses of each variable.\n");
    printf("%p , %p , %p \n", p1++ , p2++ , p3++);
    printf("it will print the same addresses of the 3 variables we defined as we did post increment so the pointers will assign to them first then it will be incremented.\n");
    printf("%p , %p , %p \n", p1 , p2 , p3);
    printf("it will print the next addresses after each variable address as each address is incremented by the size of each type.\n");
    /*
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of long: %zu bytes\n", sizeof(long));
    */

}