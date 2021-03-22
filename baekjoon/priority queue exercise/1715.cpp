#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    priority_queue< int, vector<int>, greater<int> > pq;

    cin >> n;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        pq.push(k);
    }

    int ans = 0;
    while( pq.size() > 1 ){
        int k = pq.top();
        pq.pop();
        k += pq.top();
        ans += k;
        pq.pop();
        pq.push(k);
    }

    cout << ans << "\n";

}
