#include <bits/stdc++.h>

using namespace std;

struct Time{
    int b;
    int e;
};

bool cmp(Time &t1, Time &t2){
    if( t1.b == t2.b ) return t1.e < t2.b;
    else return t1.b < t2.b;
}

/*
bool cmp2(stack<Time> &s1, stack<Time> &s2){
    return s1.top().e < s2.top().e;
}
*/

int main(){

    int n;
    vector<Time> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        Time t;
        cin >> t.b >> t.e;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), cmp);


    /*
    vector< stack<Time> > sv;
    stack<Time> s;
    s.push(v[0]);
    sv.push_back(s);
    for(int i = 1; i < n; i++){
        stack<Time> s;
        int j = 0;
        for( ; j < sv.size(); j++){
            if( v[i].b >= sv[j].top().e ){
                sv[j].push(v[i]);
                break;
            }
        }
        if( j == sv.size() ){
            s.push(v[i]);
            sv.push_back(s);
        }
        sort(sv.begin(), sv.end(), cmp2);
    }

    cout << sv.size() << endl;
    */


    /*
    for(int i = 0; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if( v[j].b >= v[i].e ){
                v[i].e = v[j].e;
                v.erase(v.begin()+j);
                break;
            }
        }
    }

    cout << v.size() << endl;
    */


    /*
    for(int i = 0; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if( v[j].b >= v[i].e ){
                v[i].e = v[j].e;
                v[j].b = -1;
                break;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if( v[i].b != -1 ) cnt++;
    }
    cout << cnt << endl;
    */


    /*
    이중 포문을 사용하면 시간 초과 됨
    N <= 200000이고 시간 제한 1초이기 때문
    */

    /*
    vector<int> ansv;
    ansv.push_back(v[0].e);
    for(int i = 1; i < v.size(); i++){
        int j = 0;
        for( ; j < ansv.size(); j++){
            if( v[i].b >= ansv[j] ){
                ansv[j] = v[i].e;
                break;
            }
        }
        if( j == ansv.size() ){
            ansv.push_back(v[i].e);
        }
    }

    cout << ansv.size() << endl;
    */

    /*
    위 코드들보단 나았지만 이것도 시간 초과 됨
    priority queue를 사용해야 했음...
    */


    priority_queue< int, vector<int>, greater<int> > pq;
    pq.push(v[0].e);
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if( v[i].b < pq.top() ){
            pq.push(v[i].e);
            cnt++;
        }
        else{
            pq.pop();
            pq.push(v[i].e);
        }
    }
    cout << cnt << endl;

}
