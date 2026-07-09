#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
  public:
    int reverseExponentiation(int n) {
        int temp=n,sum=0,rev=0;
        while(n!=0){
            int rem=n%10;
            sum+=(rev*10)+rem;
            rev=rem;
            n/=10;
            
        }
        return pow(temp,sum);
        
    }
};