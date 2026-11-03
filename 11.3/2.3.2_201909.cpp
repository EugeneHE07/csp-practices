#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int a[N], num[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        num[i] = 0;
        for (int j = 0; j < M; j++) {
            int t;
            cin >> t;
            num[i] += t;
        }
    }
    
    int T = 0;
    for (int i = 0; i < N; i++) {
        T += a[i] + num[i];
    }
    cout << T << " ";

    int k = 0;
    int P = 0 - num[0];

    for (int i = 1; i <N; i++){
        if (0-num[i] > P) {
            P = 0-num[i];
            k = i;
        }
    }
    cout << k + 1 << " " << P << endl;
    return 0;
}