#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
  public:
    int binaryToDecimal(string& b) {
        int sum=0;
        for(char c:b){
            sum=sum*2+(c-'0');
        }
            
            
        return sum;
        
    }
};