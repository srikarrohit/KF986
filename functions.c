#include <stdio.h>
void func();//prototype
void sit(){//declaration
    printf("Dog is sitting\n");//definition - body
}
int add(int x,int y){
    return x+y;
}
void swap(int *a,int *b){
    //pointers are variables that point to a memory 
    //location in C
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swap1(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
//fib(5)
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    func();
    sit();
    sit();
    int a=3;
    int b=4;
    printf("%d\n",add(a,b));
    swap1(a,b);
    printf("%d,%d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    printf("%d",fact(5));
}
void func(){
    printf("I'm a function\n");
}
//I have dog
//declaring we can teach dog how to sit
//defining sitting in actual

//0,1,1,2,3
//fib[n]=fib[n-1]+fib[n-2]. n starts from 2
//fact(5)=120=5*4*3*2*1
//fact(5)=5*fact(4)
//fact(n)=n*fact(n-1)