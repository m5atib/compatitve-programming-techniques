#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define print(item) cout << item << '\n'
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define MOD 1000000007
int main()
{
    IOS;

    // DONT FORGOT TO REMOVE NEXT TOW LINES!!

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    ll ci;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    vector<ll> memo(n + 1);
    memo[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (auto c : coins)
        {
            if (i - c >= 0)
            {
                memo[i] = min(memo[i], memo[i - c] + 1) % MOD;
            }
        }
    }

    cout << memo[n] % MOD;

    return 0;
}
