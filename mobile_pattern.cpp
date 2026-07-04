#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
	public:
	int getCount(int n) {
		if (n == 1) return 10;

        vector<vector<int>> moves = {
            {0, 8},          // 0
            {1, 2, 4},       // 1
            {2, 1, 3, 5},    // 2
            {3, 2, 6},       // 3
            {4, 1, 5, 7},    // 4
            {5, 2, 4, 6, 8}, // 5
            {6, 3, 5, 9},    // 6
            {7, 4, 8},       // 7
            {8, 5, 7, 9, 0}, // 8
            {9, 6, 8}        // 9
        };

        vector<long long> prev(10, 1), curr(10);

        for (int len = 2; len <= n; len++) {
            fill(curr.begin(), curr.end(), 0);

            for (int digit = 0; digit < 10; digit++) {
                for (int next : moves[digit]) {
                    curr[digit] += prev[next];
                }
            }

            prev = curr;
        }

        int ans = 0;
        for (int digit = 0; digit < 10; digit++) {
            ans += prev[digit];
        }

        return ans;
    }
		
	
};
