#include <stdio.h>
//sorted section and unsorted section
//we keep taking 1 element from unsorted section and place it in the sorted section
//identify where to place in the sorted section
//first element is default sorted - because it's the only one element
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){//unsorted section
        int key=arr[i];//5
        int j=i-1;//iterate in the sorted section in the reverse order
        while(j>=0 && arr[j]>key){//since arr[j]>key we move it towards right side
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){//initially sorted is empty
        int min_idx=0;
        //arr[0] as the sorted section
        //arr[0]..arr[i] this is the sorted section
        //i is saying this is the last element in the sorted section
        //ascending order sort. so we first min value then second min and so on
        //which is why we swap i and min idx
        for(int j=i+1;j<size;j++){//we iterate over the entire array
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        swap(&arr[min_idx],&arr[i]);
    }
}
//9
//0
// we swapped 0 and 9
//5
//1
//we swap 5 and 1
int main(){
    int arr[]={9,5,2,1,8,6,0};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    selectionSort(arr,size);
}