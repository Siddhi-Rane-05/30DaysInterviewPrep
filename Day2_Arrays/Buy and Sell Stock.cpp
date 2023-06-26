class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int n=prices.size();
    int msf=prices[0];    //msf = minimum so far
    int maxP=0;           //max profit
   
    for(int i = 0; i < n; i++)
    {
        msf=min(msf,prices[i]);
        int profit=prices[i]-msf;
        maxP=max(maxP,profit);
        
    }
    return maxP;

    }
    
};