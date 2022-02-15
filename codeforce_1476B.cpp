#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
#define ff first
#define ss second
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;


const int mod = 1e9 +7;
const int inf = 1e9 + 1e8;



int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		vector<ll> p(n); 
		rep(i,0,n-1) cin >> p[i];
		vector<ll> sum(n);
		ll sm = p[0];
		rep(i,1,n-1){
			sum[i] = sm;
			sm += p[i];
		}

		vector<ll> ans(n); ans[0] = 0;
		per(i,n-1,1){
			ll reqd = ceil(((double)p[i] * 100.0 )/(double)k);
			ans[i] = reqd;
			// de(reqd);
		}
		vector<ll> res(n);
		rep(i,1,n-1){
			res[i] = ans[i] - sum[i];
					}
		ll mx_id = max_element(res.begin(), res.end()) - res.begin();

		// if(ans[mx_id] > )
			cout << res[mx_id] << endl;
		// else cout << 0 << endl;

	}
}
