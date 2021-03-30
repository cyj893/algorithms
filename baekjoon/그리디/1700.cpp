#include <bits/stdc++.h>

using namespace std;

int a[100];
int p[100];

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 0; i < k; i++){
        bool b = false;
        for(int j = 0; j < n; j++){
            if( p[j] == a[i] ){
                b = true;
                break;
            }
            if( p[j] == 0 ){
                p[j] = a[i];
                b = true;
                break;
            }
        }

        if( !b ){
            int m = 0; int mi = 0;
            for(int j = 0; j < n; j++){
                int r = i+1;
                for( ; r < k; r++){
                    if( p[j] == a[r] ){
                        if( r > m ){
                            m = r;
                            mi = j;
                        }
                        break;
                    }
                }
                if( r == k ){
                    mi = j;
                    break;
                }
            }
            p[mi] = a[i];
            cnt++;
        }
    }

    cout << cnt << "\n";

}
