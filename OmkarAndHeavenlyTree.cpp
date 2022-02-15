
#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define ff first
#define ss second

const int mod = 1e9 +7;


int main(){
	int t; cin >> t;
	while(t--){
		int n,m ; cin >> n >> m;
		
		vi ans(n+1, 0);
		rep(i,0,m-1){
			int a, b, c; cin >> a >> b >> c;
			ans[b] = 1;
		}
		int root;
		rep(i,1, n){
			if(ans[i] == 0) {
				root = i;
				break;
			}
		}
		rep(i,1,n){
			if(i != root){
				cout << root << " " << i << endl;
			}
		}
		
	}

}
