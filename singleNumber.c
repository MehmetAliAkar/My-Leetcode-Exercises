#include <stdio.h>
#include <stdlib.h>


/*int binarySearch(int *nums, int numsSize,int target)
{
    int left,right,mid;
    left = 0;
    right = numsSize - 1;
    mid = (right + left)/2;
    while (left<=right)
    {
        mid = (left+right)/2;
        if (nums[mid] == target)
            return 1;
        else if(mid > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}*/

int linear_search(int array[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (array[i] == key) {
            return i;  // Anahtar öğesi bulundu
        }
    }
    return -1;  // Anahtar öğesi bulunamadı
}

int singleNumber(int* nums, int numsSize){
    int i = 0,j,k=0;
    int *usedNumber = (int*)malloc(sizeof(int) * numsSize);

    while (i<numsSize)
    {
        if (linear_search(usedNumber,k,nums[i]) == -1)
        {
            j=i+1;
            while (j < numsSize)
            {
                if (nums[j] == nums[i])
                {
                	usedNumber[k]=nums[i];
                    k++;
                    break;
                }
                j++;
            }
            if(j == numsSize)
            {
            	free(usedNumber);
                return (nums[i]);
			}
        }
        i++;
    }
    free(usedNumber);
    return i;
}

int main(void)
{
    int nums[]= {-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,354};
    int size=sizeof(nums)/sizeof(nums[0]);
    printf("%d",singleNumber(nums,size));
    return 0;
}