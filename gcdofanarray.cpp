#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
  public:
  int GCD(int a, int b)
  {
      if(b==0)
         return a;
       return GCD(b,a%b);
  }
    int gcd(int n, vector<int> arr) {
        int mini=arr[0];
        for(int i=0;i<arr.size();i++){
            mini=GCD(mini,arr[i]);
        }
        return mini;
        
    }
};
