

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int i,j;
    *returnSize = 2;
    int *returnValues = malloc((*returnSize) * sizeof(int));
    
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if((nums[i]+nums[j])==target)
             {
                returnValues[0] = i;
                returnValues[1] = j;
                break;
             }
        }

    }
    return returnValues;
}


