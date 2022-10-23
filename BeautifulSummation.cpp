#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

long long add(long long a, long long b, long long m)
{
    return ((a % m) + (b % m)) % m;
}
long long mul(long long a, long long b, long long m)
{
    return ((a % m) * (b % m)) % m;
}
long long sub(long long a, long long b, long long m)
{
    return ((a % m) - (b % m) + m) % m;
}
ll fastPower(ll x, ll n, ll m)
{
    ll result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = mul(result, x, m);
        }
        x = mul(x, x, m);
        n = n / 2;
    }
    return result;
}
int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll p, q, n, m;
    cin >> p >> q >> n >> m;

    ll sum = 0;
    for (ll k = 1; k <= n; k++) //n x log(n) 10^9 * 10-6 == 1000 s TLE
    {
        //cout<<fastPower(k,3,m)<<endl;
        ll fs = fastPower(p, k,m); //log(n)
        ll ss = fastPower(k, q,m); //log(n)
        sum = add(mul(fs,ss,m),sum,m); //2log(n) ->> log(n)
    }
    cout << sum%m;
}
