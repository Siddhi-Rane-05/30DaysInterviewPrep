class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestLength = 0;
        unordered_map<int, bool> map;

        // Insert all numbers into the map
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = false;
        }

        // Check each number for consecutive sequences
        for (int i = 0; i < nums.size(); i++) {
            int currentLength = 1;
            int currentNum = nums[i];

            // Forward checking
            while (map.count(currentNum + 1) && !map[currentNum + 1]) {
                currentLength++;
                map[currentNum + 1] = true;
                currentNum++;
            }

            // Backward checking
            currentNum = nums[i];
            while (map.count(currentNum - 1) && !map[currentNum - 1]) {
                currentLength++;
                map[currentNum - 1] = true;
                currentNum--;
            }

            longestLength = max(longestLength, currentLength);
        }

        return longestLength;
    }
};
