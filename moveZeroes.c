void moveZeroes(int* nums, int numsSize){
    int *newArr = (int*)malloc(sizeof(int)*numsSize);
    int *zeroArr = (int*)malloc(sizeof(int)*numsSize);
    int i=0,j=0,k=0;
    while (i<numsSize)
    {
        if(nums[i]==0)
            zeroArr[k++]=nums[i];
        else
            newArr[j++]=nums[i];
        i++;
    }
    i=0;
    while (i<j)
        nums[i++]=newArr[i++];
    j=0;
    while (j<k)
        nums[i++]=zeroArr[j++];
    free(zeroArr);
    free(newArr);
}