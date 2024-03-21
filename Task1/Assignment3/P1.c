#include <stdio.h>
int main(){
    char str[50];
    int ch, i=0;
    printf("Enter a string:");
    while((ch=getchar())!= '\n'){
        str[i++]=ch;
    }    
    str[i]= '\0';
    puts(str);
    return 0;
}