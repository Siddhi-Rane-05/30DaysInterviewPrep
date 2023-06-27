//Binary exponentiation

class Solution {
public:
    double myPow(double x, int n) 
    {
        int absn=abs(n);
        double ans=1.0;
        while(absn>0){
            if(absn%2==1){
                ans=ans*x;
            }
            absn/=2;
            x*=x;

        } 
        if(n<0){
            return 1/ans;
        }   
        else{
            return ans;
        }
        
    }
};

//brute force
class Solution {
public:
    double myPow(double x, int n) 
    {
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }

        double ans=1;
        for(int i=1;i<=abs(n);i++){
            ans=ans*x;
        } 
        if(n<0){
            return 1/ans;
        }   
        else{
            return ans;
        }
        
    }
};



//pow function
class Solution {
    
    public:
    double myPow(double x, int n) {
        
        double ans = pow(x,n);
        return ans;
    }
};
