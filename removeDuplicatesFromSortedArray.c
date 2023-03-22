void equalizeArray(int **arr1, int *arr2, int size)
{
    int i = 0;

    while (i < size)
    {
        (*arr1)[i] = arr2[i];
        i++;
    }
}

int removeDuplicates(int* nums, int numsSize){
    int *ret_arr = (int *)malloc(sizeof(int) * numsSize);
    int i = 1;
    int j = 0;

    ret_arr[0] = nums[0];
    while (i < numsSize)
    {
        if (nums[i] != ret_arr[j])
        {
            j++;
            ret_arr[j] = nums[i];
        }
        i++;
    }

    equalizeArray(&nums, ret_arr, j+1);
    free(ret_arr);
    return (j+1);
}
