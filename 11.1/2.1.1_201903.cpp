#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i< n; i++) {
        cin >> a[i];
    }

    cout << max(a[0],a[n-1]) << endl;

    if(n % 2) {
        cout << a[n/2] << endl;
    }else {
        int mid = (a[n/2-1] + a[n/2])/2;
        cout << mid << endl;
    }
    
    cout << min(a[0], a[n-1]) << endl;

    return 0;
}