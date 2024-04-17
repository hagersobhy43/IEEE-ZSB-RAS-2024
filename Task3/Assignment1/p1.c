#include <stdio.h>
float addition(float x, float y){
    float z = x+y;
    return z;
}
float sub(float x, float y){
    float z = x-y;
    return z;
}
float multi(float x, float y){
    float z = x*y;
    return z;
}
float division(float x, float y){
    float z = x/y;
    return z;
}
int main() {
    int n;
    float x , y , z;
    float (*operation)(float,float);
    printf("1. Addition \n2. Subtraction \n3. Multipication \n4. Division \n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    if (n == 1 || n == 2  || n == 3 || n == 4){
       printf("Enter first number: ");
       scanf("%f", &x);
       printf("Enter second number: ");
       scanf("%f", &y);
       switch (n)
       {
       case 1:
           operation = addition;
           z = operation(x,y);
           printf("result of addtion = %.2f", z);
           break;
       case 2:
           operation = sub;
           z = operation(x,y);
           printf("result of subtraction = %.2f", z);
           break;
       case 3:
           operation = multi;
           z = operation(x,y);
           printf("result of multipication = %.2f", z);
           break;
       case 4:
           operation = division;
           z = operation(x,y);
           printf("result of division = %.2f", z);
           break;
       }
    }
    else{
             printf("invalid choice");
        return 0;
    }
    return 0;

}