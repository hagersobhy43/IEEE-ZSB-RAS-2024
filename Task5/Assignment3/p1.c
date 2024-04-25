#include <stdio.h>
#define ASCENDING 1
#define DESCENDING 2

int ascending(int arr[]){
    int temp;
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter the array elements: ");
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j < 5 ; j++){
            if (arr[i] > arr[j]){ //5,3,1,6,9
                temp=arr[i];
                arr[i] = arr[j];  //i=0 , j=1 , 3,5,1,6,9
                arr[j]=temp;
            }
        }                         //i=1 , j=2 , 1,5,3,6,9
    }
                                  //i=0 , j=3 , 1,5,3,6,9
}                                 //i=0 , j=4 , 1,5,3,6,9
                                  //i=1 , j=2 , 1,3,5,6,9 
int descending(int arr[]){
    int temp;
    for(int i = 0; i < 5 ; i++){
        printf("Enter the array elements: ");
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j < 5 ; j++){
            if (arr[i] < arr[j]){  //5,3,1,6,9
                temp = arr[i];
                arr[i] = arr[j];   //i=0 , j=1 , 5,3,1,6,9
                arr[j] = temp;
            }
        }                          //i=1 , j=2 , 5,3,1,6,9
    }
                                   //i=0 , j=3 , 6,3,1,5,9
}                                  //i=0 , j=4 , 9,3,1,5,6
                                   //i=1 , j=2 , 9,3,1,5,6 
                                   //i=1 , j=3 , 9,5,1,3,6
                                   //i=1 , j=4 , 9,6,1,3,5
                                   //i=2 , j=3 , 9,6,3,1,5
                                   //i=2 , j=4 , 9,6,5,1,3
                                   //i=3 , j=4 , 9,6,5,3,1
int main(){
    int choice;
    printf("enter your choice 1 for ascending , 2 for descending : ");
    scanf("%d", &choice);
    int arr[5];
    switch (choice){
#ifdef ASCENDING
        case 1:
                ascending(arr);
                printf("acending sort of the array: ");
                for(int i = 0 ; i<5 ; i++){
                    printf("%d\n" , arr[i]);
                }
            break;
#endif

#ifdef DESCENDING
        case 2:
            descending(arr);
            printf("acending sort of the array: ");
            for(int i = 0 ; i<5 ; i++){
                printf("%d\n" , arr[i]);
            }
            break;
#endif
        default:
            printf("invalid");
    } 
    return 0;

    
}
                             