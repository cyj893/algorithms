#include <bits/stdc++.h>

using namespace std;

int T[45];

int check(int a){
    for(int i = 0; i < 45; i++){
        for(int j = 0; j < 45; j++){
            for(int k = 0; k < 45; k++){
                if( T[i] + T[j] + T[k] == a ) return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    vector<int> v;

    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    for(int i = 1; T[i-1] < 1000; i++){
        T[i-1] = i*(i+1)/2;
    }

    for(int i = 0; i < n; i++){
        cout << check(v[i]) << endl;
    }


}
