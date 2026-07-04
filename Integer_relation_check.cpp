#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n>m){
        cout<<"greater";
    }
    else if(n<m){
        cout<<"less";
    }
    else{
        cout<<"equal";
    }
    

    return 0;
}