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
    ll n;
    cin >> n;
    vector<ll> steps(n + 1);

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    if (n >= 1 && n <= 9)
    {
        cout << 1;
        return 0;
    }

    for (ll i = 1; i <= 9; i++)
        steps[i] = 1;

    for (ll i = 10; i <= n; i++)
    {
        int maxdigit = 0;
        int x = i;
        while (x > 0)
        {
            if ((x % 10) > 0)
                maxdigit = max(maxdigit, (int)x % 10);
            x /= 10;
        }

        steps[i] = 1 + steps[i - maxdigit];
    }

    cout << steps[n];

    return 0;
}
