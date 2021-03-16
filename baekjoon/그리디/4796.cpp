#include <bits/stdc++.h>

using namespace std;

struct LPV{
    int l;
    int p;
    int v;
    int ans = 0;
};

int main(){
    vector<LPV> v;
    while( 1 ){
        LPV tmp;
        cin >> tmp.l >> tmp.p >> tmp.v;
        if( tmp.l == 0 && tmp.p == 0 && tmp.v == 0 ) break;
        v.push_back(tmp);
    }

    for(int i = 0; i < v.size(); i++){
        while( 1 ){
            if( v[i].v - v[i].p > 0 ){
                v[i].v -= v[i].p;
                v[i].ans += v[i].l;
            }
            else{
                if( v[i].l > v[i].v ) v[i].ans += v[i].v;
                else v[i].ans += v[i].l;
                break;
            }
        }
        /*
        v[i].ans += (v[i].v / v[i].p) * v[i].l;
        if( v[i].v % v[i].p > v[i].l ) v[i].ans += v[i].l;
        else v[i].ans += v[i].v % v[i].p;
        */
    }

    for(int i = 0; i < v.size(); i++){
        cout << "Case " << i+1 << ": " << v[i].ans << endl;
    }

}
