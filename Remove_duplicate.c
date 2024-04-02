#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int unique_count = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[unique_count] = nums[i];
            unique_count++;
        }
    }
    return unique_count;
}
int main() {
    int nums[] = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("Original array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    int unique_count = removeDuplicates(nums, numsSize);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Number of unique elements: %d\n", unique_count);
    return 0;
}