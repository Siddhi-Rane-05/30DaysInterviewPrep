class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
           
        int n=nums.size(); 
        int exp=n*(n+1)/2;
        int total=0;
        for(int i=0;i<n;i++)
        {
            total=total+nums[i];
            nums[i]++;
        }     
        return exp-total;
    }   
};