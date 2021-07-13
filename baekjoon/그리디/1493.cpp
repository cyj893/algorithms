#include <bits/stdc++.h>

using namespace std;

struct Cube{
    int a;
    int b;
};

vector<Cube> v;
int res = 0;
bool chk = true;

bool cmp(const Cube &c1, const Cube &c2){
    return c1.a > c2.a;
}

void func(int x, int y, int z){
    if( !chk ) return;
    if( x == 0 || y == 0 || z == 0 ) return;

    for(int i = 0; i < v.size(); i++){
        if( x >= v[i].a &&  y >= v[i].a &&  z >= v[i].a && v[i].b > 0 ){
            v[i].b--;
            res++;
            func(x - v[i].a, v[i].a, v[i].a);
            func(x, y - v[i].a, v[i].a);
            func(x, y, z - v[i].a);
            return;
        }
    }
    chk = false;
}

int main(){

    int l, w, h, n;

    cin >> l >> w >> h >> n;

    for(int i = 0; i < n; i++){
        Cube c;
        cin >> c.a >> c.b;
        c.a = pow(2, c.a);
        v.push_back(c);
    }

    sort(v.begin(), v.end(), cmp);

    func(l, w, h);

    if( chk ) cout << res << endl;
    else cout << -1 << endl;

}
