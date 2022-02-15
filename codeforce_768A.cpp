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

const int mod = 1e9 +7;
const int inf = 1e9 + 1e8;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vi a(n), b(n);
		rep(i,0,n-1) cin >> a[i];
		rep(i,0,n-1) cin >> b[i];

		int ma = *max_element(a.begin(), a.end());
		int mb = *max_element(b.begin(), b.end());
		// print(a); print(b); 
		if(ma < mb) {
			rep(i,0,n-1){
				if(b[i] < a[i]) swap(a[i], b[i]);
			}
			ma = *max_element(a.begin(), a.end());

			ll ans = ma * mb;
			cout << ans << endl;
			continue;
		}
		// print(a); print(b); 

		rep(i,0,n-1){
			if(b[i] > a[i]) swap(a[i], b[i]);
		}
		mb = *max_element(b.begin(), b.end());

		ll ans = ma * mb;
		cout << ans << endl;


	}
}
