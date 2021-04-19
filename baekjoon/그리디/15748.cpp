#include <bits/stdc++.h>

using namespace std;


/*
�˰����� �¾Ҵµ� long long�� ���� �ʰ� int�� �Ἥ ������ ���Դ�
L, r, c <= 10^6 �̹Ƿ� ans ���� int ������ ���� �� �־���.
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
