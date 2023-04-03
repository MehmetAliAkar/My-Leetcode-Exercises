void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int *nums = (int*)malloc(sizeof(int) * (m + n));
    int i=0,j=0,k=0;
    while (j < m && k < n)
    {
        if(nums1[j] <= nums2[k])
        {
            nums[i++]=nums1[j++];
        }
        else{
            nums[i++]=nums2[k++];
        }
    }
    if(j == m)
    {
        while(k < n)
            nums[i++]=nums2[k++];
    }
    else if(k == n)
    {
        while(j < m)
            nums[i++]=nums1[j++];
    }

    i=0;
    while(i < (m+n))
    {
        nums1[i] = nums[i];
        i++;
    }

} 