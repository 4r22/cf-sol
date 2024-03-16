//hkg	1948A - Special Characters	C++17 (GCC 7-32)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if (n % 2 != 0) { cout << "NO" << "\n"; return;}
    string ans = "";
    for (int i = 1; i <= n / 2; i++) {
        ans += (char) 64 + i;
        ans += (char) 64 + i;
    }
    cout << "YES" << "\n" << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int T; cin >> T;
    while (T--) solve();
    
    return 0;
}
