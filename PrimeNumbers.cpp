#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    // LinearSieve
    int n;
    cin >> n;

    vector<bool> composite(n + 1);
    vector<int> primes;

    composite[0] = composite[1] = 1;

    // Time O(n) to get all primes numbers from 1 to n

    for (int i = 2; i <= n; i++)
    {

        if (!composite[i])
        {
            primes.push_back(i);
            cout<<i<<"\n";
        }
        int sz = primes.size();
        for (int j = 0; (j < sz) && (i * primes[j] <= n); j++)
        {
            composite[i * primes[j]] = 1;
            if (i % primes[j] == 0)
                break;
        }


    }



    return 0;
}
