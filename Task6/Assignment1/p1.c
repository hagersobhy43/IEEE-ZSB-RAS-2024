#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int *ptr1 = (int*)malloc(5*sizeof(int));

    if(ptr1 == NULL)
        printf("memory is not allocated");
    else{
        printf("memory is allocated!\n");
        
        for(i = 0 ; i<5 ; i++ ){
            ptr1[i] = i+1;
        }

        printf("the values assigned to ptr1:\n");
        for(i = 0 ; i<5 ; i++){
            printf("%d\n",ptr1[i]);
        }
    }
    int *ptr2 = (int*)calloc(5,sizeof(int));

    if(ptr2 == NULL)
        printf("memory is not allocated");
    else{
        printf("memory is allocated!\n");
        
        for(i = 0 ; i<5 ; i++ ){
            ptr2[i] = i*2;
        }

        printf("the values assigned to ptr2:\n");
        for(i = 0 ; i<5 ; i++){
            printf("%d\n",ptr2[i]);
        }
    }
    int *ptr3 = (int*)calloc(5,sizeof(int));

    if(ptr3 == NULL)
        printf("memory is not allocated");
    else{
        printf("memory is allocated!\n");
        
        for(i = 0 ; i<5 ; i++ ){
            ptr3[i] = (i+1)*2;
        }

        printf("the values assigned to ptr3:\n");
        for(i = 0 ; i<5 ; i++){
            printf("%d\n",ptr3[i]);
        }
    }
    free(ptr3);
    int *ptr4 = (int*)calloc(50,sizeof(int));

    if(ptr4 == NULL)
        printf("memory is not allocated");
    else{
        printf("memory is allocated!\n");
        
        for(i = 0 ; i<50 ; i++ ){
            ptr4[i] = (i+1)*2;
        }

        printf("the values assigned to ptr4:\n");
        for(i = 0 ; i<50 ; i++){
            printf("%d\n",ptr4[i]);
        }
    }//if the memory space is limited, ptr4 allocation will fail and printf sentence in line 57 will be printed as an idicate

    
    free(ptr1);
    free(ptr2);
    free(ptr4);
    return 0;

}