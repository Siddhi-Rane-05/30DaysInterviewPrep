//Time Complexity : O(n1 + n2)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int n1=nums1.size();
        int n2=nums2.size();
        int ptr1=0; int ptr2=0;
        vector<int>v;

        while(ptr1<n1 && ptr2<n2)
        {
            if(nums1[ptr1]<nums2[ptr2])
            {
                v.push_back(nums1[ptr1]);
                ptr1++;
            }
            else if(nums1[ptr1]>nums2[ptr2])
            {
                v.push_back(nums2[ptr2]);
                ptr2++;
            }
        }
       
        while (ptr1 < n1) 
        {
            v.push_back(nums1[ptr1]);
            ptr1++;
        }

        while (ptr2 < n2) 
        {
            v.push_back(nums2[ptr2]);
            ptr2++;
        }
    
      
        if (v.size() % 2 == 0) 
        
        {
           
            int mid1 = v[v.size() / 2 - 1];
            int mid2 = v[v.size() / 2];
            
            return (mid1 + mid2) / 2.0;
        } 
        
        else 
        {
            return v[v.size() / 2];
        }
    }
};


