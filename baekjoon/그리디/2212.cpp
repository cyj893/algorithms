#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    vector<int> v;

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    /*
    dist�� ó���� priority queue�� �����ߴ��� �ð� �ʰ��� ���Դ�
    pq�� ���� �߰��� ��Ӱ�� �ִ�(�ּ�)�� �ʿ��� ���� ����
    �̰� ���� �� �ְ� sort�ص� �Ǵϱ� �׳� vector�� �ְ� sort�ϱ�
    */
    vector<int> d;
    int pre = v[0];
    for(int i = 0; i < n; i++){
        d.push_back(v[i] - pre);
        pre = v[i];
    }

    sort(d.begin(), d.end());

    int ans = 0;
    for(int i = n-k; i > 0; i--){
        ans += d[i];
    }

    cout << ans << "\n";

}
