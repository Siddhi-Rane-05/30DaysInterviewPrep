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


//Sorting + Two Pointer
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>ans;
        int n=nums.size();
        int ptr1=0;
        int ptr2=n-1;
        while(ptr1<ptr2)
            {
                int sum=nums[ptr1]+nums[ptr2];
                if(target==sum)
                {
                    ans.push_back(ptr1);
                    ans.push_back(ptr2);
                    return ans;
                }
                else if(sum<target)
                {
                    ptr1++;
                }
                else
                {
                    ptr2--;
                }
            }
        
        
        return ans;
    }    
};




################# 3 SUM #############################

class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>>ans;
        int n=nums.size();
        if(nums.empty() || n<2)
        {
            return vector<vector<int>>(ans.begin(), ans.end());
        }
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int ptr1=i+1;
            int ptr2=n-1;
            while(ptr1<ptr2)
            {
                int sum=nums[ptr1]+nums[ptr2]+nums[i];
                if(sum==0)
                {
                    ans.insert({nums[i], nums[ptr1], nums[ptr2]});
                    ptr1++;
                    ptr2--;
                }
                else if(sum<0)
                {
                    ptr1++;
                }
                else
                {
                    ptr2--;
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());    
    }
};   



//Brute Force


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        int n=nums.size();
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                    {
                        int sum=nums[i]+nums[j]+nums[k];
                        if(sum==0)
                        {
                            ans.insert({nums[i], nums[j], nums[k]});
                          
                    
                        }  
                       
                    }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

