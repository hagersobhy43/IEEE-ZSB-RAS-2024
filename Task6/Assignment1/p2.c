#include <stdio.h>
#include <stdlib.h>
int main(){
    int i , n , freq[256]={0};
    printf("Enter the length of the name: ");
    scanf("%d", &n);
    printf("\n");

    char *name=(char*)calloc(n , sizeof(char));
    if(name == NULL)
        printf("memory is not allocated");
        else{
            printf("memory is allocated!\n");

            printf("Enter the name: ");
            scanf("%s" , name);
            printf("\n");
            printf("The name is %s\n" , name);
        }

        for(int i=0 ; name[i]!= '\0' ; i++)
            freq[name[i]]++;
        
        for(i=0 ; i<256 ; i++){
            if(freq[i] !=0)
                printf("the frequancy of %c is %d\n", i , freq[i]);
        }

        free(name);
        return 0 ;
}