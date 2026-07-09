#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
public:
    string makePalindrome(long long prefix, int len) {
        string left = to_string(prefix);
        string res = left;

        int i = (len % 2 == 0) ? left.size() - 1 : left.size() - 2;

        while (i >= 0) {
            res += left[i];
            i--;
        }

        return res;
    }

    string closestPalindrome(string num) {

        if (num.size() == 1)
            return num;

        int len = num.size();
        long long number = stoll(num);
        long long prefix = stoll(num.substr(0, (len + 1) / 2));
        vector<long long> candidates;
        for (long long p = prefix - 1; p <= prefix + 1; p++) {
            candidates.push_back(stoll(makePalindrome(p, len)));
        }
        candidates.push_back((long long)pow(10, len - 1) - 1);


        candidates.push_back((long long)pow(10, len) + 1);

        long long best = -1;

        for (long long cand : candidates) {

            long long diff = llabs(cand - number);

            if (best == -1 ||
                diff < llabs(best - number) ||
                (diff == llabs(best - number) && cand < best)) {

                best = cand;
            }
        }

        return to_string(best);
    }
};