//TC:O(n) SC:O(1)
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	   while(n*n<=m)
	   {
	       n++;
	   }
	   return n-1;
	}  
};

//TC:O(n) SC:O(1)
