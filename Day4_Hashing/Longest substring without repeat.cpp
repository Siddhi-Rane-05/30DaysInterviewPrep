// Time complexity of O(n) - Space complexity O(1) 

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    
    {
        char count[256]={0};      
        int i=0;
        int j=0;
        int ans=0;
        while(j<s.length())
        {
            count[s[j]]++;
            while(count[s[j]]>1)
                {
                    count[s[i]]--;
                    i++;
                }

            ans=max(ans,j-i+1);
            j++;
        
        }
        return ans;
       
    }
   
};






