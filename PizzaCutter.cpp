#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int ll;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n != 0)
        {
            ll counter = 0;
            map<ll, ll> dgs;
            ll digree;
            while (n--)
            {
                cin >> digree;

                

                ll newD = abs(digree % 360);
                ll oldD = digree % 360;
                ll cc = (360 + (digree%360)) % 360;
                //cout<<"digree : "<<digree<<"  newD : "<<cc<<endl;
                if (cc >= 180)
                {
                    cc -= 180;
                }

                if (dgs.find(cc) == dgs.end())
                {
                    // the key does not exist
                    dgs[cc] = cc;
                    counter += 2;
                }
            }
            cout << counter << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }
}
