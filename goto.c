#include <stdio.h>
int main(){
    int i=0;
    loop:
        printf("%d",i);
        i++;
        if(i<5){
            goto loop;
        }
}