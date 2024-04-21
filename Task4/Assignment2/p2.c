#include <stdio.h>
#include <string.h>
typedef struct info{
    char name[25];
    int age;
}info;
int main(){
    info person , *ptr;
    ptr =  &person;
    strcpy(ptr->name , "Hager Mohamed Sobhy");
    ptr->age = 21;
    
    printf("name: %s\n", ptr->name);
    printf("age: %d", ptr->age);

    return 0 ;

}