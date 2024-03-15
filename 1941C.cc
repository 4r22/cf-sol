//1941C - Rudolf and the Ugly String    C++17 (GCC 7-32)    Accepted    31 ms   2000 KB
//pretty sure there's cleaner way to do it
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; string s; cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') || (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')) {
            ans++;
            i = i + 2;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int T; cin >> T;
    while (T--) solve();
    
    return 0;
}
