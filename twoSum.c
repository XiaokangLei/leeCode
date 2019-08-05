/**
 * 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *output = (int *)malloc(sizeof(int) * 2);;
    for(int i = 0; i < numsSize-1; i++){
        for(int j = i+1; j < numsSize; j ++){
            if(nums[i] + nums[j] == target)
            {
                output[0] = i;
                output[1] = j;
                *returnSize = 2;
                return output;
            }
        }
    }
    return output;
}

// result： pass,348ms,7.7MB