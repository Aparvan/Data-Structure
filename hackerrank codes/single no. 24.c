#include <stdio.h>



int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        int isUnique = 1;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            result = nums[i];
            break;
        }
    }
    return result;
}




int main() {
    int n;

   
    scanf("%d", &n);

    int nums[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int single_element = singleNumber(nums, n);

    printf("%d\n", single_element);

    return 0;
}
