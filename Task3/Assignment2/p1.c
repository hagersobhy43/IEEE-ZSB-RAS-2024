#include <stdio.h>
#define add(x,y) (x+y)
#define sub(x,y) (x-y)
#define multi(x,y) (x*y)
#define div(x,y) (x/y)

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
           z = add(x,y);
           printf("result of addtion = %.2f", z);
           break;
       case 2:
           z = sub(x,y);
           printf("result of subtraction = %.2f", z);
           break;
       case 3:
           z = multi(x,y);
           printf("result of multipication = %.2f", z);
           break;
       case 4:
           z = div(x,y);
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



/*
            difference between normal if,else if,else and perprocessor directives #if,#elif,#else
    
    normal if,else if,else : they are part of compilation as they are executed within runtime
                            and they all consume memory 
                            
    syntax : if(condition){
                if it is true,the code will be executed
             }
             else if(another condition){
                if this condition is true,the code here will be executed
             }
             else{
                if none of (if) and (else if) conditions is true, the code here will be executed 
             }

    #if,#elif,#else : they are not a part of compilation as they are done before compailing 
                     and by this way only the fulifilled condition code will consume memory

    syntax : #if (condition)
                code to be executed if condition is true
             #elif (another condtion)
                code to be executed if condition is true
             #else
                code to be executed if none of (#if) and (#elif) conditions is true
*/