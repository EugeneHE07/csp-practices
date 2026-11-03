#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int A[n+2] = {0};
    for (int i = 1;i <= n; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= n; i++) {
        int t = A[i-1] + A[i] + A[i+1];
        if (i == 1) {
            cout << t / 2 << " ";
        }else if(i == n) {
            cout << t/2 << endl;
        }else {
            cout << t/3 << " ";
        }
    }

    return 0;
}