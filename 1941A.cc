//1941A - Rudolf and the Ticket C++17 (GCC 7-32)    Accepted    0 ms    0 KB
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    int arn[n] = {}; while (n--) cin >> arn[n];
    int arm[m] = {}; while (m--) cin >> arm[m];
    int ans = 0;
    for (int i : arn) {
        for (int j : arm) {
            if (i + j <= k) {
                ans++;
            }
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
