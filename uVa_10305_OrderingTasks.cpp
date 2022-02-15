
#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

const int mod = 1e9 +7;
const int inf = 1e9 + 1e8;

vi dfs_num;
vector<vi> adj_list;
vi topoSort;
// vector<bool> atv(1e3,  false);
void dfs2(int i){
    dfs_num[i] = 1;
    for(int v : adj_list[i]){
        if(dfs_num[v] == 0)
            dfs2(v);
    }
    topoSort.push_back(i);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1){
        int n, m; cin >> n >> m;
        if(n == 0 and m == 0) return 0;
        topoSort.clear();
        dfs_num.assign(n+1, 0);
        adj_list.assign(n+1, vi());
        rep(i,1,m){
            int u, v; cin >> u >> v;
            adj_list[u].push_back(v);
        }
        
        rep(i,1,n){
            if(dfs_num[i] == 0)
                dfs2(i);
        }
        int l = topoSort.size();
        per(i,l-1,0){
            if(i != 0)
                cout << topoSort[i] << " " ;
            else cout << topoSort[i];
        }cout << endl;
    }
	
}
