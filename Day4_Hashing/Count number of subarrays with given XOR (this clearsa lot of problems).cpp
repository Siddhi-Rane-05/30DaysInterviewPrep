// Time Complexity :O(N^3)

int Solution::solve(vector<int> &A, int B) {
    int n1=A.size();
    int count=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=i;j<n1;j++)
        {
            int xorV=0;
            for(int k=i;k<=j;k++)
            {
                xorV ^= A[k];
            }
            if(xorV==B)
            {
                count++;
            }
            
        }
    }
    return count;
}


// Time Complexity :O(N^2)

int Solution::solve(vector<int> &A, int B) {
    int n1=A.size();
    int count=0;
    for(int i=0;i<n1;i++)
    {
        int xorV=0;
        for(int j=i;j<n1;j++)
        {
           
            xorV ^= A[j];
            
            if(xorV==B)
            {
                count++;
            }
            
        }
    }
    return count;
}



// Time Complexity :O(N log N)
int Solution::solve(vector<int> &A, int B) 
{
    unordered_map<int,int>frq;
    int count=0;
    int xorV=0;
    for(int i=0;i<A.size();i++)
    {
        xorV = xorV ^ A[i];
        if(xorV==B)
        {
            count++;
        }
        if(frq.find(xorV ^ B)!= frq.end())
        {
            count += frq[xorV ^ B];
        }
        frq[xorV]+=1;
            
    }
    return count;
}


