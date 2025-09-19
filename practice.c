#include <stdio.h>
#include <limits.h>
void printEven(int arr[],int size){
    for(int i=0;i<10;i+=2){
        printf("%d\t",arr[i]);
    }
}
void printOdd(int arr[],int size){
    for(int i=1;i<10;i+=2){
        printf("%d\t",arr[i]);
    }
}
void printReverse(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
int max(int arr[],int size){
    int max=INT_MIN;//smallest possible integer
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int size){
    int min=INT_MAX;//smallest possible integer//100
    for(int i=0;i<size;i++){
        if(min>arr[i]){//1,,100>1
            //min=1
            //1>2
            min=arr[i];
        }
    }
    return min;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int secondLargest(int arr[],int size){
    int first=INT_MIN;
    int second=INT_MIN;
    int i=0;
    while(i<2){
        for(int j=0;j<size;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        i++;
    }
    return arr[size-2];
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printEven(arr,10);
    printf("\n");
    printOdd(arr,10);
    printf("\n");
    printReverse(arr,10);
    printf("\n%d",max(arr,10));
    printf("\n%d",min(arr,10));
    printf("\n%d",secondLargest(arr,10));
}