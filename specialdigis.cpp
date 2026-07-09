#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution {
public:
    static const int MOD = 1000000007;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    bool isValid(int sum, int c, int d) {
        while (sum) {
            int x = sum % 10;
            if (x == c || x == d) return true;
            sum /= 10;
        }
        return false;
    }

    int bestNumbers(int n, int a, int b, int c, int d) {

        if (a == b) {
            return isValid(n * a, c, d) ? 1 : 0;
        }

        vector<long long> fact(n + 1), invFact(n + 1);

        fact[0] = 1;
        for (int i = 1; i <= n; i++)
            fact[i] = fact[i - 1] * i % MOD;

        invFact[n] = modPow(fact[n], MOD - 2);

        for (int i = n; i >= 1; i--)
            invFact[i - 1] = invFact[i] * i % MOD;

        long long ans = 0;

        for (int i = 0; i <= n; i++) {
            int sum = i * a + (n - i) * b;

            if (isValid(sum, c, d)) {
                long long ways = fact[n];
                ways = ways * invFact[i] % MOD;
                ways = ways * invFact[n - i] % MOD;

                ans = (ans + ways) % MOD;
            }
        }

        return ans;
    }
};