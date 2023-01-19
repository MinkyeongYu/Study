#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <queue>
using namespace std;
#define MAX_index 10001

// 노드, 간선, 시작노드번호
int N, M, V;
vector<int> graph[MAX_index];
bool visited[MAX_index];
bool visited2[MAX_index];

// 깊이 우선 탐색
void dfs(int x){
    visited[x]=true;
    cout<<x<<" ";
    for(int i=0; i<graph[x].size(); i++){
        int y = graph[x][i];
        if(!visited[y]){
            dfs(y);
        }
    }
}
// 너비 우선 탐색
void bfs(int x){
    queue<int> q;
    q.push(x);
    visited2[x]=true;

    // queue에 원소가 들어있을때만 실행
    while(!q.empty()){
        // queue의 첫번째 원소 추출
        int tmp = q.front();
        q.pop();
        cout<<tmp<<" ";
        // 방문하지 않은 원소 있는지 확인
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            // 방문하지 않은 원소가 있다면, 큐에 삽입
            if(!visited2[y]){
                q.push(y);
                visited2[y]=true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin>>N>>M>>V;

    for(int i=0; i<M; i++){
        int Vn, Vn2;
        cin>>Vn>>Vn2;
        graph[Vn].push_back(Vn2);
    }

    dfs(V);
    cout<<"\n";
    bfs(V);
    return 0;
}