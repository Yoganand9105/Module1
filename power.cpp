class Solution {
public:
    double half=0;
    double power(double x , long long n){

        if(n==0){
            return 1; 
        }
        half=power(x,n/2);
        if(n%2==1){
            return x*half*half;
        }
        else{
            return half*half;
        }
    }
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            return 1.0/power(x,-N);
        }
        return power(x,N);
        
    }
};