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

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    
    vector<int>dice = {1,2,3,4,5,6};
    vector<ll>memo(n + 1);
    memo[0] = 1;
    for (ll i=1; i<=n; i++){
        for (auto c : dice){
            if (i-c >= 0){
                memo[i] += memo[i-c]%MOD;
            }

        }
    }

    cout<<memo[n]%MOD;


    return 0;
}
