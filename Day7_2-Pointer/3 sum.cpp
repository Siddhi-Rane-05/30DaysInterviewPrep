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


