#include <bits/stdc++.h>

using namespace std;

int a[20];
int n, s, k;

void check(vector<int> m){
    int sum = 0;
    for(int i = 0; i < m.size(); i++){
        sum += m[i];
    }
    if( s == sum ) k++;
}

void func(int i, vector<int> m){

    if( i == n ) return;
    check(m);

    for(int j = i+1; j < n; j++){
        m.push_back(a[j]);
        func(j, m);
        m.pop_back();
    }

}

int main(){

    cin >> n >> s;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        vector<int> m;
        m.push_back(a[i]);
        func(i, m);
    }

    cout << k << endl;
}







/*
개선된 방안
각 조합 원소들을 다 알 필요 없고 합만 인자로 넘겨 주어도 됨.
*/

void func(int i, int sum){
    if( i == n ) return;
    if( sum + a[i] == s ) k++;

    func(i+1, sum);
    func(i+1, sum + a[i]);
}

int main(){

    cin >> n >> s;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    func(0, 0);

    cout << k << endl;
}
