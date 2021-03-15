#include <bits/stdc++.h>

using namespace std;

int n, M;
char candies[50][50];

int getM(){

    int ret = 1;
    for(int i = 0; i < n; i++){
        int m = 1;
        for(int j = 1; j < n; j++){
            if( candies[i][j-1] == candies[i][j] ) m++;
            else{
                ret = max(m, ret);
                m = 1;
            }
        }
        ret = max(m, ret);
        m = 1;
        for(int j = 1; j < n; j++){
            if( candies[j-1][i] == candies[j][i] ) m++;
            else{
                ret = max(m, ret);
                m = 1;
            }
        }
        ret = max(m, ret);
    }
    return ret;
}

int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> candies[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            swap(candies[i][j-1], candies[i][j]);
            M = max(M, getM());
            swap(candies[i][j-1], candies[i][j]);

            swap(candies[j-1][i], candies[j][i]);
            M = max(M, getM());
            swap(candies[j-1][i], candies[j][i]);
        }
    }

    cout << M << endl;

}
