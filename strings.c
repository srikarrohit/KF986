#include <stdio.h>
#include <string.h>
union Data{
    int i;
    float f;
    char str[20];
};//the largest type of variable's memory is allocated to Data
//20 bytes
//at a time only one varible can be used
int main(){
    char str[10];
    strcpy(str,"Srikar");
    //strlen
    //strcpy
    //strcmp
    //strcat
    printf("%d\n",strlen(str));//6//\0
    printf("%d\n",strcmp(str,"srikar"));//a-b;a first parameter. it is smaller ascii value.
    //so it returns -1
    strcat(str,"Rohit");
    printf("%s\n",str);
    char ch='A';
    printf("%c\n",ch+1);//character arithmetic
    union Data data;
    data.i=20;
    strcpy(data.str,"Srikar");
    printf("%d\n",data.i);
}