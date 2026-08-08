int maxSubArray(int* nums, int numsSize) {
    int max_so_far = nums[0];
    int curr_max = nums[0];

    for (int i = 1; i < numsSize; i++) {
        curr_max = nums[i] > (curr_max + nums[i]) ? nums[i] : (curr_max + nums[i]);
        max_so_far = max_so_far > curr_max ? max_so_far : curr_max;
    }

    return max_so_far;
}