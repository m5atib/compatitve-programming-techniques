#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define print(item) cout << item << '\n'
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    IOS;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;

    vector<ll> memo(n + 1);
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    cout << memo[n] << '\n';

    return 0;
}
