#include <stdio.h>
int main(){
    int a=4;
    int *ptr=&a;//pointer to int
    int arr[3];
    int *ptr1=arr;//pointer to array
    int *arr1[3];//array of pointers
    int b=2,c=3,d=4;
    arr1[0]=&b;
    arr1[1]=&c;
    arr1[2]=&d;
    printf("%d\n",*arr1[0]);
    int **ptr2;//pointer to pointer
    int *ptr3=&b;
    ptr2=&ptr3;
    printf("%d\n",**ptr2);
    int arr2[3][4];
    int (*ptr4)[3][4]=&arr2;//pointer to 2d array
    arr2[0][0]=1;
    printf("%d\n",(*ptr4)[0][0]);
    int *ptr5=malloc(5*sizeof(int));//we can only do this for pointers. 
    //and 5 sized array will be assigned to this pointer
    int rows=3;
    int cols=4;
    int **ptr6=malloc(rows*sizeof(int *));
    for(int i=0;i<rows;i++){
        ptr6[i]=malloc(cols*sizeof(int));
    }
    //2d array in heap memory
}