#include <stdio.h>
void func();//prototype
void sit(){//declaration
    printf("Dog is sitting\n");//definition - body
}
int main(){
    func();
    sit();
    sit();
}
void func(){
    printf("I'm a function\n");
}
//I have dog
//declaring we can teach dog how to sit
//defining sitting in actual