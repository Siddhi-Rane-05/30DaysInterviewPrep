//TC:O(nlogn) SC:O(n)


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    static bool compare(pair<int,int> a, pair<int,int> b)
    {
        return a.second<b.second;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>> v;
        
        for(int i=0; i<n; i++)
        {
            pair<int,int>p=make_pair(start[i],end[i]);
            v.push_back(p);
        }    
            sort(v.begin(), v.end(), compare);
            
            int count=1;
            int ansEnd=v[0].second;  //first vector's second elemet v[0].second=2 for the 2nd example
            
            for(int i=1;i<v.size();i++)
            {
                if(v[i].first>ansEnd)
                {
                    count++;
                    ansEnd=v[i].second;
                }
            } 
            return count;  
     
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends