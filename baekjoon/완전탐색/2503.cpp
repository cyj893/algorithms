#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector< tuple<string, int, int> > v;
    for(int i = 0; i < n; i++){
        string guess = "";
        int s, b;
        cin >> guess >> s >> b;
        v.push_back(make_tuple(guess, s, b));
    }
    int ans = 0;
    for(char i = '1'; i <= '9'; i++){
        for(char j = '1'; j <= '9'; j++){
            for(char k = '1'; k <= '9'; k++){
                if( i == j || j == k || k == i ) continue;
                bool chk = true;
                for(tuple<string, int, int> ele : v){
                    int s = 0, b = 0;
                    if( i == get<0>(ele)[0] ) s++;
                    if( j == get<0>(ele)[1] ) s++;
                    if( k == get<0>(ele)[2] ) s++;
                    if( i == get<0>(ele)[1] || i == get<0>(ele)[2] ) b++;
                    if( j == get<0>(ele)[0] || j == get<0>(ele)[2] ) b++;
                    if( k == get<0>(ele)[1] || k == get<0>(ele)[0] ) b++;
                    if( s != get<1>(ele) || b != get<2>(ele) ){
                        chk = false; break;
                    }
                }
                if( chk )ans++;
                /*
                string g[100]; int s[100], b[100];
                좀 더 간결하게
                for(int v = 0; chk && v < n; v++){
                    int ss = 0, bb = 0;
                    ss = (i == g[v][0]) + (j == g[v][1]) + (k == g[v][2]);
                    bb = (i == g[v][1]) + (i == g[v][2]) + (j == g[v][0]) + (j == g[v][2]) + (k == g[v][1]) + (k == g[v][0]);
                    if( ss != s[v] || bb != b[v] ) chk = false;
                }
                if( chk ) ans++;
                */
            }
        }
    }
    cout << ans << endl;

}
