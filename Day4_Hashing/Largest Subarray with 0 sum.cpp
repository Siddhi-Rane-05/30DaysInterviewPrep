class Solution {
public:
    int maxLen(vector<int>& A, int n) {
        unordered_map<int, int> map;
        int sum = 0;
        int ans= 0;
        map[0] = -1;
        for (int i = 0; i < n; i++) {
            sum += A[i];
            if (map.find(sum) != map.end()) {
                ans = max(ans, i - map[sum]);
            } else {
                map[sum] = i;
            }
        }
        return ans;
    }
};