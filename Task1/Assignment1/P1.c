#include <stdio.h>
#define n 13

int main(){
    int arr[n]={10,5,4,8,33,15,33,10,8,3,4,6,15};
    int i,j,count=0;
    printf("array elements: ");
    for(i=0;i<13;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
            count+=1;
            break;
            }
        }
    }
    printf("number of duplicated elements:%d\n", count);
    return 0;

}