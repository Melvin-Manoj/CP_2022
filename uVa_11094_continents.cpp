
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

vector<string> a;
vector<string> temp;
int m, n; 
int dr[] = {1, 0, -1, 0}; //S E N W
int dc[] = {0, 1, 0, -1};

int fill(int r, int c, char c1, char c2){
	if(r < 0 || r > m-1 || c < 0 || c > n-1) return 0;
	if(a[r][c] != c1) return 0;
	int ans = 1;
	a[r][c] = c2;
	rep(i,0,3){
		int next_r = r + dr[i], next_c = c + dc[i];
		if(next_c == n) next_c = 0;
		if(next_c == -1) next_c = n-1;
		ans += fill(next_r, next_c, c1, c2);
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	while(!cin.eof()){
		cin >> m >> n;
		// cout <<"hellO" << endl;
		a.assign(m, "");

		rep(i,0,m-1) {
			cin >> a[i];
		}
		int kr, kc; cin >> kr >> kc;
		char c2 = a[kr][kc];
		fill(kr,kc, c2, '.');
		
		int ans = 0;
		rep(i,0,m-1){
			rep(j,0,n-1){
				if(i == kr and j == kc) continue;
				// de(ans);
				ans = max(fill(i, j, c2, '.'), ans);
			}
		}

		cout << ans << endl;
	}
	
}
