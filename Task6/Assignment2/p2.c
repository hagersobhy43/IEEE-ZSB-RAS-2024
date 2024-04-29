#include <stdio.h>
#include <string.h>
#define stopcode "!!"

int main() {

    char something[50];
    int i ,freq[256]={0}, uniqe[256]={0};
    while(1){
        printf("Enter a string , to exit enter (%s): ", stopcode);
        scanf("%s" , something);

        //exit condition
        if(strcmp(something , stopcode) == 0){
            printf("code is stopped!");
            break;
        }

       //counting the freq of each character of the string
        for(i = 0 ; something[i] != '\0' ; i++)
            freq[something[i]]++;
        
        //insert the character ASCII which is not repeated by mean its freq is 1 to uniqe array
        printf("the uniqe characters of the string are ");
        int length= strlen(something);
        for(i = 0 ; i<256 ; i++){
            if(freq[i] == 1)
                uniqe[i]=i;
            if(uniqe[i] != 0 ) //to print only the uniqe characters as uniqe un set to 0 when defined
                printf("%c   ", uniqe[i]);
        }
        printf("\n");
    }
    
}