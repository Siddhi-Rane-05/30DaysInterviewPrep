class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ansSum=0;
        unordered_map<char,int>mp={{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]>=mp[s[i+1]])
            {
              ansSum=ansSum+mp[s[i]];  
            }
            else
            {   
                ansSum=ansSum-mp[s[i]];
            }
        }
        return ansSum;
    }
};