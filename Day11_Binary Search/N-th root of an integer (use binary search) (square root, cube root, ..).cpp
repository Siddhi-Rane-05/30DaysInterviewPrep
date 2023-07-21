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











class Solution{
	public:
	int NthRoot(int n, int m)
	{
		long long int low = 1LL, high = m, mid;
		long long int ans = -1;
		while(low <= high){
			mid = (low + high)/2;
			long long int x = mid;
			for(int i = 1; i < n; i++){
				x *= mid;
				if(x > m * 1LL)break;
			}
			if(x == m * 1LL){
				ans = mid;
				break;
			}
			else if(x > m)high = mid - 1;
			else low = mid + 1;
		}
		return int(ans);
	}  
};