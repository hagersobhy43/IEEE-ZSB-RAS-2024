#include  <stdio.h>
int main() {
    int x = 0x123456 , *ptr = &x;
    printf("%x \n", *ptr);
    printf("it will print the value of x the pointer points to.\n");
    printf("%x \n", *(ptr++));
    printf("it will also print the original value of x the pointer points to because we did post increment so it will assign to x first then it it will be incremented to go to the next memory location.\n");
    ptr = &x; //reset ptr
    printf("%x \n", *(++ptr));
    printf("it will print the value of the next location after x  as we did pre increment and we don't know what it contains so it will print different value each time.\n");
    ptr = &x;
    printf("%x \n", ++(*ptr));
    printf("it will increment the value of x by 1 then print it as we did pre increment");
}