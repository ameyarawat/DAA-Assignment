void heapify(int* nums, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && nums[left] > nums[largest]) {
        largest = left;
    }

    if (right < n && nums[right] > nums[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = nums[i];
        nums[i] = nums[largest];
        nums[largest] = temp;
        heapify(nums, n, largest);
    }
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    for (int i = numsSize / 2 - 1; i >= 0; i--) {
        heapify(nums, numsSize, i);
    }

    for (int i = numsSize - 1; i > 0; i--) {
        int temp = nums[0];
        nums[0] = nums[i];
        nums[i] = temp;
        heapify(nums, i, 0);
    }

    *returnSize = numsSize;
    return nums;
}