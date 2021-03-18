#include <bits/stdc++.h>

using namespace std;

struct Time{
    int b;
    int e;
};

bool cmp(Time &t1, Time &t2){
    if( t1.e == t2.e ) return t1.b < t2.b;
    else return t1.e < t2.e;
}


int main(){

    int n;
    vector<Time> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        Time t;
        cin >> t.b >> t.e;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), cmp);

    int ans = 0;
    int e = 0;
    for(int i = 0; i < n; i++){
        if( e <= v[i].b ){
            e = v[i].e;
            ans++;
        }
    }

    cout << ans << endl;

}
