#include <iostream>
#include <tuple>
#include <queue>

using namespace std;

char maze[102][102] = {0,};
int visit[102][102] = {0,};
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main(){
    int n, m;
    string s;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < m; j++){
            maze[i+1][j+1] = s[j];
        }
    }
    queue< tuple<int,int> > q;
    q.emplace(1, 1);
    while(!q.empty()){
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        q.pop();
        for(int i = 0; i < 4; i++){
            int xx = x + dx[i], yy = y + dy[i];
            if( maze[yy][xx] == '1' && visit[yy][xx] == 0 ){
                visit[yy][xx] = visit[y][x] + 1;
                q.emplace(xx,yy);
            }
        }
    }
    cout << visit[n][m] + 1;
}
