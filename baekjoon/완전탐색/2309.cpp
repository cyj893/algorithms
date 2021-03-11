#include <bits/stdc++.h>

using namespace std;

int h[9];

int main(){

    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> h[i];
        sum += h[i];
    }

    vector<int> ans;
    for(int i = 0; i < 8; i++){
        bool b = false;
        for(int j = i+1; j < 9; j++){
            if( sum - (h[i] + h[j]) == 100 ){
                h[i] = 101; h[j] = 101;
                b = true;
                break;
                /*
                break를 해도 for문 하나만 빠져 나와 자꾸 오류가 있었다.
                이중 포문을 완전히 탈출하려면 break 하나로는 안 되니
                차라리 함수로 빼서 return; 하는 게 나았을 듯
                */
            }
        }
        if(b) break;
    }

    sort(h, h+9);
    for(int i = 0; i < 7; i++){
        cout << h[i] << endl;
    }
}
