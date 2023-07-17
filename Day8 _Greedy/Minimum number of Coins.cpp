//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        int coins[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        int n=sizeof(coins) / sizeof(coins[0]);
        vector<int>ans;
        for(int i=N-1;i>=0;i--)
        {
            while(coins[i]<=N)
            {
                ans.push_back(coins[i]);
                N-=coins[i];
            }
        }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends