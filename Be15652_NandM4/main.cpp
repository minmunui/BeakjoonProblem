#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 9;

int N,M;
int arr[MAX];
bool visited[MAX];

void dfs(int k) { //현재 위치
  if(k==M) { //목표인 M까지 도달했다면
    for(auto i = 0 ; i < M ; i ++ )
      cout << arr[i] << " "; //arr에 저장한 값 M개 만큼 출력
    cout << "\n";
  }else { //목표에 도달하지 않았다면
    int t = 0;
    if ( k == 0 ) {
      t = 0;
    } else {
      t = arr[k-1];
    }
    for(auto i = 1 ; i <= N ; i++ ) {

      if(!visited[i] and i >= t) { //방문 안 했다면
//        visited[i]=false; //방문 표시
        arr[k]=i; // i값을 arr에 저장
        dfs(k+1); //더 깊게 들어가자. (M까지)
//        visited[i]=false; //백트래킹 설정
      }
    }
  }
}

int main() {
  cin >> N >> M;
  dfs(0);
}