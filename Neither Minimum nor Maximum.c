int findNonMinOrMax(int* nums, int numsSize) {
    if (numsSize < 3) return -1;
    int temp,i,j,result;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(nums[i]<nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    int min=nums[0];
    int max=nums[numsSize-1];
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=min && nums[i]!=max){
            return nums[i];
        }
    }
    return -1;
}
    
    
