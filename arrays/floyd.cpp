#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
void floyd(vector<vector<int>> &dist){
  int n=dist.size();
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        if(dist[j][i]!=1e8 && dist[i][k]!=1e8){
          dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
        }
      }
    }
  }

}

void solve() {
    int INF = 100000000;
    vector<vector<int>> dist = {
        {0, 4, INF, 5, INF},
        {INF, 0, 1, INF, 6},
        {2, INF, 0, 3, INF},
        {INF, INF, 1, 0, 2},
        {1, INF, INF, 4, 0}
    };
    floyd(dist);
    for(int i=0;i<dist.size();i++){
      for(int j=0;j<dist.size();j++){
        cout<<dist[i][j]<<" ";
      }
      cout<<endl;
    }
}

int32_t main() {
     solve();
    return 0;
}