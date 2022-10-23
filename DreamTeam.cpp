#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


vector<string> findMax () {
    
    for (int i=0; i<p; i++) {
        B  - p[i];
    }
}
int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll B,p,g,s,f,c;

    cin>>p;
    string name; 
    ll salary; 
    map<string,ll>gurds(p);
    for (ll i =0; i<p; i++) {
        cin>>name; cin>>salary;
        gurds[name] = salary;
    }
    cin>>g;
    map<string,ll>shooting(g);
    for (ll i =0; i<g; i++) {
        cin>>name; cin>>salary;
        shooting[name] = salary;
    }

    cin>>s;
    map<string,ll>small(s);
    for (ll i =0; i<s; i++) {
        cin>>name; cin>>salary;
        small[name] = salary;
    }

    cin>>f;
    map<string,ll>power(f);
    for (ll i =0; i<f; i++) {
        cin>>name; cin>>salary;
        power[name] = salary;
    }

    cin>>c;
    map<string,ll>center(c);
    for (ll i =0; i<c; i++) {
        cin>>name; cin>>salary;
        center[name] = salary;
    }


    vector<ll>memo(B+1);


    


}
