#include <stdio.h>
int linearSearch(int arr[],int key, int size){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int binarySearchIterative(int arr[],int key, int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<=key){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;
}
int binSearchRecursive(int arr[],int left, int right, int key){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<=key){
        return binSearchRecursive(arr,mid+1,right,key);
    }else{
        return binSearchRecursive(arr,left,mid-1,key);
    }
}
void insertElement(int arr[],int size,int e,int idx,int newArr[]){
    for(int i=0;i<idx;i++){
        newArr[i]=arr[i];
    }
    newArr[idx]=e;
    for(int i=idx+1;i<size+1;i++){
        newArr[i]=arr[i-1];
    }
}
void plusOne(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i]+=1;
    }
}
int main(){
    int arr[5];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    plusOne(arr,5);
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int array[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }
    printf("%d\n",linearSearch(arr,3,5));
    printf("%d\n",binarySearchIterative(arr,2,5));
    printf("%d\n",binSearchRecursive(arr,0,4,5));
    //recursive binary search
    //linear search
    //key
    int newArr[6];
    insertElement(arr,5,8,4,newArr);
    for(int i=0;i<6;i++){
        printf("%d\n",newArr[i]);
    }
}
//plusone
//array-increment 1 to every single array element