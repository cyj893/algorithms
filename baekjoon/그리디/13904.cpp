#include <bits/stdc++.h>

using namespace std;

int date[1000];

struct Work{
    int d;
    int w;
};

bool cmp(const Work &w1, const Work &w2){
    if(w1.w == w2.w) return w1.d > w2.d;
    return w1.w > w2.w;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<Work> v;
    cin >> n;

    int m = 0;
    for(int i = 0; i < n; i++){
        Work t;
        cin>> t.d >> t.w;
        if( t.d > m ) m = t.d;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; i++){
        for(int j = v[i].d; j > 0; j--){
            if( date[j] == 0 ){
                date[j] = v[i].w;
                break;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < m+1; i++){
        ans += date[i];
    }

    cout << ans << "\n";

}
