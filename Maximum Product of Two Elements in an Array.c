int maxProduct(int* nums, int numsSize) 
{
    int prod=0,temp;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            
        }
        
    }
    prod=(nums[numsSize-1]-1)*(nums[numsSize-2]-1);
    return prod;
    
}
