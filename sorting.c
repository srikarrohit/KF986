#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSortAsc(int arr[],int size){
    int i=0;
    while(i<size-1){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        i++;
    }
}
//2	 3	6	1	8	4	9	-- 1 -- we are done with last index
//2	 3	6	1	4   8	9   -- 2 -- we are done with second last index
//2	 3	1	4   6   8	9   -- 3 -- we are done with third last index
int main(){
    int arr[]={6,2,3,8,1,9,4};
    int size=sizeof(arr)/sizeof(int);
    bubbleSortAsc(arr,size);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}