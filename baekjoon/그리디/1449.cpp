#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, l;
    vector<int> v;
    cin >> n >> l;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans++;
        int k = i;
        for(int j = i+1; j < n && i < n; j++){
            if( v[j] < v[k] + l - 0.5 ) i++;
            else break;
        }
    }
    cout << ans << endl;
}
