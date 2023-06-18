int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = malloc(sizeof(int) * 2);
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = 1; j < numsSize ; j++)       {
            if (nums[i] + nums[j] == target && i != j) {
                ret[0] = j;
                ret[1] = i;
            }
            
        }

    }
    *returnSize = 2;
    return ret;
}
