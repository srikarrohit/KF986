#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    //0the index is unique
    int insertIndex=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]!=nums[i]){
            nums[insertIndex]=nums[i];
            insertIndex++;
        }
    }
    return insertIndex;
}
int removeElement(int* nums, int numsSize, int val) {
    int i=0;
    for(int j=0;j<numsSize;j++){
        if(nums[j]!=val){
            nums[i]=nums[j];
            i++;
        }
    }
    return i;
}
int main(){

}