//Hash Map  - TC/SC - O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {   
            int complement=target-nums[i];
            if(map.find(complement)!=map.end()) 
            {
                ans.push_back(i);
                ans.push_back(map[complement]);
                return ans;
            }
            else
            {
                map[nums[i]]= i;
            }
        }
        return ans;
    }
};

//Brute Force - TC : O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum=nums[i]+nums[j];
                if(sum==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};              