#include <stdbool.h>
int* flattenMatrix(int** matrix,int row, int col){
    int* newarr=malloc(row*col*sizeof(int));
    int k=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            newarr[k]=matrix[i][j];
            k++;
        }
    }
    return newarr;//1 3 5 7 10 11 16 20..
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int row=matrixSize;
    int col=matrixColSize[0];
    int* flattenedarr=flattenMatrix(matrix,row,col);
    int left=0;
    int right=row*col-1;//11/4..11%4...5/4=row,5%4=col
    while(left<=right){
        int mid=(left+right)/2;
        int mid_value=matrix[mid/col][mid%col];
        //int mid_value=flattenedarr[mid];
        if(mid_value==target){
            return true;
        }else if(mid_value<=target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return false;
}