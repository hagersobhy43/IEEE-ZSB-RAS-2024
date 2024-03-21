#include <stdio.h>
void adding(float *num1,float *num2){
    float sum;
    sum= *num1 + *num2;
    printf("sum of %.2f and %.2f is %.2f",*num1,*num2,sum);
}
int main(){
    float x,y;
    printf("enter first number: ");
    scanf("%f",&x);
    printf("enter second number: ");
    scanf("%f",&y);
    adding(&x,&y);

}