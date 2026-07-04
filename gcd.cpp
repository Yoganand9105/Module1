#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=nums[0],mini=nums[0];
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        while(maxi!=0){
            int rem=mini % maxi;
            mini=maxi;
            maxi=rem;

        }
        return mini;
    }
};