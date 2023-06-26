class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        if(row==0)
        {
            return false;
        }
        

        //binary search

        int start = 0;
        int end = (row*col)-1;
      
        while(start<=end)
        {   
            int mid = start+((end-start)/2);
            if(matrix[mid/col][mid%col]==target)
            {
                return true;
            }
            if(matrix[mid/col][mid%col]<=target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
       
        }        
        
        return false;
    }
};


//Brute Force

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        
        for(int i=0;i<row;i++)
        {   
            for(int j=0;j<row;j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
       
        }        
        
        return false;
    }
};


