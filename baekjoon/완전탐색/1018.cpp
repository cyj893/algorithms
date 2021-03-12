#include <bits/stdc++.h>

using namespace std;

char board[50][50];
char chess[2] = { 'W', 'B' };

int func(int r, int c){
    int W = 0, B = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if( board[r+i][c+j] == chess[(j+i)%2] ) W++;
            else B++;
        }
    }
    return max(W, B);
}

int main(){

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    int k = 0;
    for(int i = 0; i+8 <= n; i++){
        for(int j = 0; j+8 <= m; j++){
            k = max(k, func(i, j));
        }
    }

    cout << 64 - k << endl;

}
