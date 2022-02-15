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


int main(){
	int t; cin >> t;
	while(t--){
		int n, m, r, c; cin >> n >> m >> r >> c;
		vector<string> a(n+1);
		int nob = 0;
		rep(i,1,n){
			string s; cin >> s;
			a[i] = '.' + s;
			
			nob += count(a[i].begin(), a[i].end(), 'B');
		}
		if(nob == 0) {
			cout << -1 << endl;
			continue;
		}
		int cr = count(a[r].begin(), a[r].end(), 'B' ),
			 cc = 0;
		rep(i,1,n){
			if(a[i][c] == 'B') cc++;
		}
		// de(cr); de(cc);
		int ans = 0;
		// if(cc == 0 and cr == 0) ans = 3;
		// else if(cc == n and cr == m) ans = 0;
		// else if(cc == n or cr == m) ans = 1;
		// else ans = 2;
		if(a[r][c] == 'B') ans = 0;
		else{
			if(cr == 0 and cc == 0) ans = 2;
			else ans = 1;
		}

		cout << ans << endl;
	}
	
}
