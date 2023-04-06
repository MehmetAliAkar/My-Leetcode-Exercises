int linearSearch(int *nums,int numsSize,int target)
{
    int i=0;
    while (i < numsSize)
    {
        if(nums[i]==target)
            return 1;
        i++;
    }
    return -1;
}

int majorityElement(int* nums, int numsSize){
    int major = nums[0],i=0;
    int j;
    int count = 1;
    while (i < numsSize)
    {
        count=0;
        if(linearSearch(nums,i,nums[i])==-1)
        {
            j=i+1;
            while (j < numsSize)
            {
                if(nums[j]==nums[i])
                {
                    count++;
                }
                j++;
            }
            if(count>=numsSize/2)
                return nums[i];
        }
        i++;
    }
    return i;
}