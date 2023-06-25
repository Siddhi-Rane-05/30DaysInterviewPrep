class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void reverse(vector<int>& nums, int i, int j) {
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i;
        int j;

        for (i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                break;
            }
        }

        if (i < 0) {
            j = n - 1;
            reverse(nums, 0, j);
        } else {
            for (j = n - 1; j > i; j--) {
                if (nums[j] > nums[i]) {
                    swap(nums, i, j);
                    break;
                }
            }

            reverse(nums, i + 1, n - 1);
        }
    }
};