#include <stdio.h>
int main(){
    enum arithmetic{plus = '+' , minus= '-' , multi= '*' , div= '/' , and= '&' , or= '|' , not= '!'};
    int x , y;
    char oper;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter the operation sign(+ , - , * ...): ");
    scanf(" %c" , &oper);
    
    switch(oper){
        case plus:
            printf("%d + %d = %d\n", x , y , x+y);
            break;
        case minus:
            printf("%d - %d = %d\n", x , y , x-y);
            break;
        case multi:
            printf("%d * %d = %d\n", x , y , x*y);
            break;
        case div:
            printf("%d / %d = %d\n", x , y , x/y);
            break;
        case and:
            printf("%d & %d = %d\n", x , y , x&y); //they will be turned to binary then the operation occures
            break;
        case or:
            printf("%d | %d = %d\n", x , y , x|y);//they will be turned to binary then the operation occures
            break;
        case not:
            printf("! %d = %d\n", x  , !x);
            printf("! %d = %d", y , !y);
            break; 
        default:
            printf("it's invalid");
    }
    printf("the size of enum : %lu", sizeof(enum arithmetic));
    //enum's size will be 4 and will not change if we added extra operations
    //becauase we didn't give it a specifc type so it's represented using integer type
    //if we tried this code below ,the size of it will be 1 as we gave it a specific type
    //enum character : char{one};
    //printf("size: %lu" , sizeof(enum character));
    
    return 0;
}