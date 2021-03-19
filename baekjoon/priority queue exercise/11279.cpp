#include <bits/stdc++.h>

using namespace std;

int main(){
    /*
    자꾸 시간 초과가 떠서 뭔가 했는데 이 두 줄 넣으니 해결됨.
    endl 대신 \n 쓰기
    scanf, printf, puts, getchar, putchar 사용 x
    15552 빠른 A+B 참고
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    priority_queue<int> pq;
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
