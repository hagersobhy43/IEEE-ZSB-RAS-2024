#include <stdio.h>
#define ADDING
#define adding(x,y) (x+y)
#define SUBTRACTING
#define subtracting(a,b) (a-b)
int main () {
    int x , y , operation;
    printf("Enter first number: ");
    scanf("%d",&x);

    printf("Enter second number: ");
    scanf("%d",&y);

    printf("Enter 1 for adding and 2 for subtraction: ");
    scanf("%d", &operation);

    switch(operation){
#ifdef ADDING 
        case 1:
            printf("%d + %d = %d", x , y , adding(x,y));
            break;
#endif

#ifdef SUBTRACTING
        case 2:
            printf("%d - %d = %d", x , y , subtracting(x,y));
            break;
#endif   
        default:
            printf("invalid");
            break;
    }
    return 0;
}
