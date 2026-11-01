#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int red, yellow, green;
    cin >> red >> yellow >> green;

    int n,k,t,ans = 0;
    cin >> n;

    while (n--) {
        cin >> k >> t;
        if(k == 0){
            ans += t;
        }else if(k == 1) {
            ans += t;
        }else if(k == 2){
            ans +=(red + t);
        }
    }
    cout << ans << endl;

    return 0;
}