#include <bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry){
            int x,y;
             if(i>=0){
                 x=a[i]-'0';
             }
             else{
                x=0;
             }
             if(j>=0){
                 y=b[j]-'0';
             }
             else{
                y=0;
             }
            int sum = x ^ y ^ carry;

            int newCarry = (x & y) | (y & carry) | (x & carry);

            ans += sum + '0';

            carry = newCarry;

            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }