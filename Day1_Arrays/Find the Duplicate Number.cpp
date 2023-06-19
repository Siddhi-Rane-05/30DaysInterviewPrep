class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
    if(nums.size()<=1){
        return -1;
    }
    int sp=nums[0];
    int fp=nums[nums[0]];
    while(sp!=fp)
    {
        sp=nums[sp];
        fp=nums[nums[fp]];
    }
    fp=0;
    while(sp!=fp)
    {
        sp=nums[sp];
        fp=nums[fp];

    }
    return sp;
    }
};
