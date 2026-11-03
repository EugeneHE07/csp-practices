#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int B[n] = {0};

    for (int i = 1; i <= n; i++) {
        cin >> B[i];
    }

    int Smax = B[0];
    int Smin = B[0];

    for (int i = 1; i <= n; i++) {
        if (B[i - 1] < B[i]) {
            Smin += B[i];
        }
        Smax += B[i];
    }

    cout << Smax << " " << Smin << endl;

    return 0;
}