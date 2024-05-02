int bin_sch(int *nums, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid inside the if block
        
        if (nums[mid] == target)
            return mid;
        else {
            if (nums[low] <= nums[mid]) {
                if (target < nums[mid] && target >= nums[low])
                    return bin_sch(nums, low, mid - 1, target);
                else
                    return bin_sch(nums, mid + 1, high, target);
            } else {
                if (target <= nums[high] && target > nums[mid])
                    return bin_sch(nums, mid + 1, high, target);
                else
                    return bin_sch(nums, low, mid - 1, target);
            }
        }
    }
    
    return -1;
}

int search(int* nums, int numsSize, int target) {
    if (numsSize <= 0)
        return -1;
    return bin_sch(nums, 0, numsSize - 1, target);
}
