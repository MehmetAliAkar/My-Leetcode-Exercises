int missingNumber(int* nums, int numsSize){
    int control[10000] = {0};
    int i=0;
    while (i <numsSize)
    {
        control[nums[i]]=1;
        i++;
    }
    i=0;
    while (i<numsSize)
    {
        if (control[i]==0)
        {
            return i;
        }
        i++;
    }   
    return numsSize;
}