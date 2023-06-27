//Hash Map
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>count;
        for(int i : nums)
        {
            count[i]++;
            if(count[i]>n/2)
            {
                return i;
            }
        }
        return -1;
    }
};