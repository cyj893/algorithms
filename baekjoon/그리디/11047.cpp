#include <iostream>

using namespace std;

int a[10] = {0,};

int main(){
    int n, k, m = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = n-1; i > -1; i--){
        m += k / a[i];
        k %= a[i];
    }

    cout << m << endl;
}
