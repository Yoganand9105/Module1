#include<bits/stdc++.h>
using namespace std;
int Singlenumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }