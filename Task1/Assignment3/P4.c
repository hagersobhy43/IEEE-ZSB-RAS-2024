#include <stdio.h>
int main(){
    char s1[10]="good job!";
    char s2[10];
    for(int i=0 ; s1[i]!= '\0' ;i++){
        s2[i]=s1[i];
    }
    puts(s2);
    return 0;
}