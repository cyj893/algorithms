#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    priority_queue< int, vector<int>, greater<int> > pq;
    cin >> n;

    /*
    for(int i = 0; i < n*n; i++){
        int k;
        cin >> k;
        pq.push(k);
        if( pq.size() > n ){
            pq.pop();
        }
    }
    */


    /*
    for문 안의 if문을 없애면 조금 더 빠르다.
    */
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        pq.push(k);
    }

    for(int i = 0; i < n*n - n; i++){
        int k;
        cin >> k;
        pq.push(k);
        pq.pop();
    }

    cout << pq.top() << "\n";

}
