#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int max(int arr[],int size){
    int max=INT_MIN;//smallest possible integer
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    //0 0 0 1 1 2 3. Elements will be strictly smaller than the largest element in the array. 
    //And they will be consecutive as well. Build frequency array with indices being the element.
    //0-3
    //1-2
    //2-1
    //3-1
    int arr[]={0,0,0,1,1,2,3,20};
    int size=sizeof(arr)/sizeof(int);
    //max+1 ->1,2,3
    //21
    //100
    int out_size=max(arr,size)+1;
    int *out_arr=calloc(out_size,sizeof(int));
    //int out_arr[out_size+1];
    //write for loop and initialize all array elements to 0
    for(int i=0;i<size;i++){
        out_arr[arr[i]]++;
    }
    for(int i=0;i<out_size;i++){
        printf("%d %d\n",i,out_arr[i]);
    }
    //int out_arr[out_size]={0};//will work only if the array size is a constant
}