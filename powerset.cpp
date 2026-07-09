#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
  public:
    vector<string> powerSet(string &s) {
        int subsets=1<<s.length();
        vector<string> ans;
        for(int i=0;i<subsets;i++){
            string n="";
            for(int j=0;j<s.length();j++){
                if(i&1<<j) n+=s[j];
            }
            ans.push_back(n);
            
        }
           sort(ans.begin(),ans.end());
    return ans;
        
    }
 
};