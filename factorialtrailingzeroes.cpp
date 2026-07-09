#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
public:
    int trailingZeroes(int n) {
        int cnt=0;
        long long fact=5;
        while(n!=0){
            cnt+=n/fact;
            fact*=fact;
        }
        return cnt;

    }
};