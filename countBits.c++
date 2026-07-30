#include <bits/stdc++.h>
using namespace std;
#include<vector>
vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        for(int i=0;i<=n;i++){
            if(i==0) v[i]=0;
            if(i==1){
                v[i]=1;
            }
            else{
                v[i]=v[i/2]+(i%2);
            }
            
        }
        return v;
    }