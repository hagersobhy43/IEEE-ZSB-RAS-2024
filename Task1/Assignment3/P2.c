#include <stdio.h>
int main(){
        char str[50];
    int ch, i=0 , j=0;
    printf("Enter a string:");
    while((ch=getchar())!= '\n'){
        str[i++]=ch;
    }    
    str[i]= '\0';
    puts(str);
    printf("individual characters of the string are:\nh");
    while(str[j]!= '\0'){
        printf("%c " , str[j]);
        j++;
    }
    return 0;
}