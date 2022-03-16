#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

string OneComp(string s) {
    string ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    string s; cin >> s;

    cout << OneComp(s) << nl;

    return 0;
}