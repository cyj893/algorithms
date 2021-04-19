#include <bits/stdc++.h>

using namespace std;


/*
알고리즘은 맞았는데 long long을 쓰지 않고 int를 써서 오답이 나왔다
L, r, c <= 10^6 이므로 ans 값이 int 범위를 넘을 수 있었음.
*/


struct Rest{
    int x;
    long long c;
};

bool cmp(const Rest &r1, const Rest &r2){
    if( r1.c == r2.c ) return r1.x < r2.x;
    return r1.c > r2.c;
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int L, N, rF, rB;
    vector<Rest> v;
    cin >> L >> N >> rF >> rB;

    for(int i = 0; i < N; i++){
        Rest r;
        cin >> r.x >> r.c;
        v.push_back(r);
    }

    sort(v.begin(), v.end(), cmp);

    long long ans = 0;
    int x = 0;
    for(int i = 0; i < N; i++){
        if( v[i].x > x ){
            ans += v[i].c * (v[i].x - x) * (rF - rB);
            x = v[i].x;
        }
    }

    cout << ans << "\n";
}
