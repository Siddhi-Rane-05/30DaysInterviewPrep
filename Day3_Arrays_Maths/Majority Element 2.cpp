class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> result;
        unordered_map<int,int>count;
        for(int i : nums)
        {   
            count[i]++;
            if(count[i]>n/3)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
    

