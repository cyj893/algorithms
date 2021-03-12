#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    cin >> n;

    int len = n;
    int cnt = 0;
    while(len){
        len /= 10;
        cnt++;
    }

    int ans = 0;
    for(int i = n - 9*cnt; i < n; i++){
        int m = i;
        int k = 0;
        while( m ){
            k += m%10;
            m /= 10;
        }
        if( i + k == n ){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

}
