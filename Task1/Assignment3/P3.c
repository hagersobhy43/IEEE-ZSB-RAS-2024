#include <stdio.h>
void input(char str[]){
    int ch, i=0 , j=0;
    while((ch=getchar())!= '\n'){
        str[i++]=ch;
    }    
    str[i]= '\0';
}
void compare(char *x , char *y){
    int flag=0;
    while(*x != '\0'|| *y!='\0'){
        if(*x == *y){

           *x++;
           *y++;
        }
        else if((*x != '\0' && *y == '\0')
        ||(*x == '\0' && *y != '\0')||(*x != *y)){
            flag =1;
            printf("strings are not equal.");
            break;
        }
    }
    if (flag==0){
        printf("strings are equal.");
    }

}
int main(){
    char string1[50];
    char string2[50];
    printf("Enter first string:\n");
    input(string1);
    printf("Enter second string:\n");
    input(string2);
    compare(string1,string2);
    return 0;
}