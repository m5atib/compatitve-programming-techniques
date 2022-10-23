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

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    map<char, char> enc; // 97-122 capital --- //65-92
    enc['a'] = 'o';      // 1
    enc['b'] = 'p';      // 2
    enc['c'] = 'q';
    enc['d'] = 'r';
    enc['e'] = 's';
    enc['f'] = 't';
    enc['g'] = 'u';
    enc['h'] = 'v';
    enc['i'] = 'w';
    enc['j'] = 'x';
    enc['k'] = 'y';
    enc['l'] = 'z';
    enc['m'] = 'a';
    enc['n'] = 'b';
    enc['o'] = 'c';
    enc['p'] = 'd';
    enc['q'] = 'e';
    enc['r'] = 'f';
    enc['s'] = 'g';
    enc['t'] = 'h';
    enc['u'] = 'i';
    enc['v'] = 'j';
    enc['w'] = 'k';
    enc['x'] = 'l';
    enc['y'] = 'm';
    enc['z'] = 'n';

    //-------- capital
    enc['A'] = 'O';      // 1
    enc['B'] = 'P';      // 2
    enc['C'] = 'Q';
    enc['D'] = 'R';
    enc['E'] = 'S';
    enc['F'] = 'T';
    enc['G'] = 'U';
    enc['H'] = 'V';
    enc['I'] = 'W';
    enc['J'] = 'X';
    enc['K'] = 'Y';
    enc['L'] = 'Z';
    enc['M'] = 'A';
    enc['N'] = 'B';
    enc['O'] = 'C';
    enc['P'] = 'D';
    enc['Q'] = 'E';
    enc['R'] = 'F';
    enc['S'] = 'G';
    enc['T'] = 'H';
    enc['U'] = 'I';
    enc['V'] = 'J';
    enc['W'] = 'K';
    enc['X'] = 'L';
    enc['Y'] = 'M';
    enc['Z'] = 'N';

    string hearizeEnc;
    //cin >> hearizeEnc;
    getline (cin, hearizeEnc);
    cout<<hearizeEnc<<endl;
    string newString = "";
    ll sz = hearizeEnc.length();
    for (ll i = 0; i < sz; i++)
    {

        if (enc.find(hearizeEnc[i]) == enc.end())
        {
            // the key does not exist
             newString += hearizeEnc[i];
        }else {
            newString+=enc[hearizeEnc[i]];
        }
    }
    cout<<newString;
    return 0;
}
