#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    vector<int> v;

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    /*
    dist를 처음에 priority queue에 저장했더니 시간 초과가 나왔다
    pq는 실행 중간에 계속계속 최대(최소)가 필요할 때만 쓰자
    이건 값들 다 넣고 sort해도 되니까 그냥 vector에 넣고 sort하기
    */
    vector<int> d;
    int pre = v[0];
    for(int i = 0; i < n; i++){
        d.push_back(v[i] - pre);
        pre = v[i];
    }

    sort(d.begin(), d.end());

    int ans = 0;
    for(int i = n-k; i > 0; i--){
        ans += d[i];
    }

    cout << ans << "\n";

}
