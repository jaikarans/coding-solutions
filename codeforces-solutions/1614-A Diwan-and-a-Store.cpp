#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
        int t; cin >> t;
        while (t--) {
                int n,l,r,k;
                cin >> n >> l >> r >> k;
                vector<int> v(n);
                int ans = 0;
                for (int i=0; i<n; i++) {
                        cin >> v[i];
                }
                sort(v.begin(), v.end());
                for (int i=0; i<n; i++) {
                        if (v[i] >= l && v[i] <= r && k >= v[i]) {
                                //cout << "v[i]=" << v[i]<< " k=" << k << "\n";
                                ans++;
                                k-=v[i];
                                
                        }
                }
                cout << ans << "\n";
                //cout << "**********\n";
        }
        return 0;
}

