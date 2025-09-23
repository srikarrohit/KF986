#include <stdio.h>
int sumelements(int arr[rows][cols],int rows,int cols){
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
int incrow(int arr[3][4],int row,int cols){
    for(int j=0;j<cols;j++){
        arr[row][j]++;
    }
}
int pridiagsum(int arr[4][4],int rows){
    int sum=0;
    for(int i=0;i<rows;i++){
        sum+=arr[i][i];
    }
    return sum;
}
int main(){
    int arr[3][4];//declare like this
    //scan elements 
    int arr1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //scan element and print them
    int rows=sizeof(arr)/sizeof(arr[0]);//12*4 bytes/4*4 bytes=3
    int cols=sizeof(arr[0])/sizeof(int);//16 bytes/4 bytes=4
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int size_x,size_y;
    scanf("%d %d",&size_x,&size_y);
    int arr2d[size_x][size_y];
    int row;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter row to increment");
    scanf("%d",&row);
    incrow(arr,row,cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int arr2[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{1,2,3,4}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("%d\n",pridiagsum(arr2,4));
}