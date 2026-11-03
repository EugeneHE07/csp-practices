#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    map<string, int> cnt;
    for (int i = 0; i < n; i++) {
        cnt[A[i]]++;
    }

    for (auto it = cnt.begin(); it != cnt.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    /*for (auto p :cnt){
        cout << p.first << " " << p.second << endl;
    }*/
    return 0;
}