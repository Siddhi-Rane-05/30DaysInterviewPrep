//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    bool isPossibleSolution(int A[], int N, int M,int mid)
    {
        int studentCount=1;
        int pageSum=0;
        for(int i=0;i<N;i++)
        {
            if(pageSum+A[i]<=mid)
            {
                pageSum=pageSum+A[i];
            }
            else
            {
                studentCount++;
                if(studentCount>M || A[i]>mid)
                {
                    return false;
                }
                pageSum=A[i];
                
            }
        }
        return true;
        
        
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if (N < M) {
            return -1;
        }
        int start=0;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        int end=sum;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(isPossibleSolution(A,N,M,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            
            mid=start+(end-start)/2;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends