#include <stdio.h>
#define n 13

void freq(int arr[],int m){
    int i,j,count=1,mark[m];
    for(i=0;i<m;i++){
        mark[i]=0;
    }
    for(i=0;i<m;i++){
        if(mark[i]==1){ //to make sure not to count the frequancy of same element again
            continue;
        }
        count=1;
        for(j=0;j<m;j++){
            if(i!=j && arr[i]==arr[j]){
                count+=1;
                mark[j]=1;
            }
        }
        printf("%d frequancy is %d \n",arr[i],count);

    }

}
int main(){
    int arr[n]={10,5,4,8,33,15,33,10,8,3,4,6,15};
    int i,j,count=0;
    printf("array elements: ");
    for(i=0;i<13;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    freq(arr,n);

}