#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    priority_queue< int, vector<int>, greater<int> > pq;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if( x == 0 ){
            if( pq.empty() ) cout << "0\n";
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else pq.push(x);
    }

}
