/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
    int n; cin >> n;

    vector<int> a(n);

    for (auto &x: a) cin >> x;

    string s; cin >> s;

	bool ok = true;

	for (int i = 0; i < n; i++) {
		int m = a[i];
		char k = s[i];

		for (int j = 0; j < n; j++) {
			if (a[j] == m and s[j] != k) ok = false;
		}
	}

	if (ok) cout << "YES\n";
	else cout << "NO\n";

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/
