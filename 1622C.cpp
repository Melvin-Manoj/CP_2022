
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;

#define ff first
#define ss second
#define pii pair<int,int>

ll const inf = 1*(1e18+1e16); 
using namespace std;

ll const maxm = 1e5+3;
ll const mod = 1e9+7;



int main(){
	
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n>> k;
		vector<ll> a(n+1);
		rep(i,1,n) cin >> a[i];

		sort(a.begin(), a.end());

		vector<ll> sum(n+1,0);
		sum[1] = a[1];
		rep(i,2,n){
			sum[i] = sum[i-1]+a[i];
		}

		ll ans = inf;
		rep(x,0,n-1){
			ll v = k + a[1] - sum[n-x];
			v = floor((double)v/(x+1));
					
			if(v > a[1]) v = a[1];
			if(sum[n-x] + v*x + v - a[1] <= k){
					ans = min(ans, abs(v-a[1])+x);
			}
			// cout << "x= " << x << " => " << abs(v-a[1])+x << endl;

		}
		cout << ans << endl;
	}
}
