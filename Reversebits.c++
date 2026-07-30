#include<bits/stdc++.h>
using namespace std;
int reverseBits(int n) {
        
        uint32_t ans=0;
        while(n!=0){
           int bit = n & 1;              
        ans = (ans << 1) | bit;      

        n = n >> 1;
           



        }
        return ans;
        
    }