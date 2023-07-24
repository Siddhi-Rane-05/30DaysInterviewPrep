//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossibleSolution(int n, int k, vector<int>& stalls, int distance) 
    {
        int cowCount = 1;
        int lastPosition = stalls[0];
        
        for (int i = 1; i < n; i++) 
        {
            if (stalls[i] - lastPosition >= distance) 
            {
                cowCount++;
                lastPosition = stalls[i];
            }
            if(cowCount==k)
            {
                return true;
            }
        }
        return false;

    }

    int solve(int n, int k, vector<int>& stalls) {
        sort(stalls.begin(), stalls.end());
        
        int start = 1; 
        int end = stalls[n - 1] - stalls[0]; // Maximum possible distance is the range of stalls
        
        int result = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (isPossibleSolution(n, k, stalls, mid)) {
                result = mid;
                start = mid + 1; // To find the largest possible distance, move to the right
            } else {
                end = mid - 1;
            }
        }
        
        return result;
    }
};



//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends