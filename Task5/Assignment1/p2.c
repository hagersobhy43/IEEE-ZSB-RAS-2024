#include <stdio.h>
typedef struct addingcomplex{
    int real;
    int img;
}complex;
complex adding(complex number1 , complex number2){
    complex sum;
    sum.real = number1.real + number2.real;
    sum.img = number1.img + number2.img;
    return sum;
}
int main(){
    complex x , y , sum;
    printf("enter first complex number : ");
    scanf("%d+j%d", &x.real, &x.img);
    printf("enter second complex number : ");
    scanf("%d+j%d", &y.real, &y.img);
    sum = adding(x , y);
    printf("sum = %d+j%d",sum.real,sum.img);

    return 0;

}