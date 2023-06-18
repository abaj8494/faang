int* runningSum(int* nums, int numsSize, int* returnSize){
    int *sum = malloc(sizeof(int) * numsSize);

    int a = 0;
    for (int i = 0; i < numsSize; i++) {
        a += nums[i];
        sum[i] = a;
    }

    *returnSize = numsSize;

    return sum;
}
