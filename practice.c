#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
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
//use struct and return sum and average
//collection of datatypes/variables
struct Person{
    int age;
    char name[20];
};
typedef struct{
    int age;
    char name[20];
}Dog;
typedef struct{
    int sum;
    double avg;
}output;
output calc(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    double avg=(double)sum/size;
    output out;
    out.sum=sum;
    out.avg=avg;
    return out;
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
    struct Person person1;
    person1.age=10;
    strcpy(person1.name,"Srikar");
    struct Person* person2=malloc(sizeof(struct Person));
    person2->age=20;
    printf("\n");
    strcpy(person2->name,"Nikhil");
    printf("%s\n",person1.name);
    printf("%s\n",person2->name);
    Dog dog;
    dog.age=3;
    strcpy(dog.name,"Snoofy");
    printf("%s\n",dog.name);
    struct Person* persons=malloc(2*sizeof(struct Person));
    persons[0].age=20;
    strcpy((persons+0)->name,"first");
    (persons+1)->age=20;
    strcpy((persons+1)->name,"second");
    printf("%s\n",persons[0].name);
    printf("%s\n",(persons+1)->name);
    output out =calc(arr,10);
    printf("%d %f",out.sum,out.avg);
}