#include <stdio.h>
int main(){
    int a=4;//4 bytes
    double b=5;//8 bytes
    b=a;//(implicit type casting)
    b=(double)a;//explicit type casting
    int x=3;
    printf("%p\n",(void*)&x);
    int *p=&x;
    printf("%p\n",p);
    printf("%p\n",&p);
    char ch[5];//stack
    char* ptr=ch;//&ch[0]
    //pointer variable can point to first memory 
    //location of an array
    //continuous chain of memory
    //pointer arithmetic
    //ch[3];
    ptr+=3;
    //ch[0] --200 <-ptr
    //ch[1] --202 <-ptr+1
    //ch[2] --204 <-ptr+2
    //ch[3]--206  <-ptr+3
    char *dynamicptr=malloc(10*sizeof(int));
    //memory will be allocated on heap
    //i can realloc and resize this array
    dynamicptr=realloc(dynamicptr,20*sizeof(int));
    //calloc - initialization
    free(dynamicptr);
    printf("%p",dynamicptr);//dangling pointer
    //it still points to previously allocated memory
    dynamicptr=NULL;
}
//stack - local variables and functional stack
//heap- dynamic memory -- malloc/calloc
//data segment - static and global(Initialized)
//bss segment - static and global(uninit)
//text- code
