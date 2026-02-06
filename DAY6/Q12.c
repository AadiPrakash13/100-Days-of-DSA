void moveZeroes(int* nums, int numsSize) {
    int writeIndex = 0;
    int zeroCount = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writeIndex++] = nums[i];
        } else {
            zeroCount++;
        }
    }

    for (int i = 0; i < zeroCount; i++) {
        nums[writeIndex++] = 0;
    }
}
