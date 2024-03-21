#include <stdio.h>
#define n 13

int main() {
    int arr[n] = {10, 5, 4, 8, 33, 15, 33, 10, 8, 3, 4, 6, 15};
    int i, j;
    int unique;
    printf("array elements: ");
    for(i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Unique elements in the array: ");

    for (i = 0; i < n; i++) {
        unique = 1;
        for (j = 0; j < n; j++) {
            if (i!=j && arr[i] == arr[j]) {
                unique = 0; 
                break;
            }
        }
        if (unique==1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}


