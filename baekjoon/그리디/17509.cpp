#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;

    int ans = 0;
    for(int i = 0; i < 11; i++){
        int D, V;
        cin >> D >> V;
        ans += V;
        v.push_back(D);
    }
    ans *= 20;

    sort(v.begin(), v.end());

    int sum = 0;
    for(int i = 0; i < 11; i++){
        sum += v[i];
        ans += sum;
    }

    cout << ans << endl;

}
