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
		vi a(n);
		rep(i,0,n-1) cin >> a[i];
		ll sum = accumulate(a.begin(), a.end(), 0LL);
	
		sum *= 2;
		if(sum % (ll)n != 0){
			cout << 0 << endl;
			continue;
		}
		sum /= n;

		map<int,int> m;
		rep(i,0,n-1) m[a[i]]++;
		
		// for(auto i = m.begin(); i != m.end(); i++){
		// 	cout << i->first << " " << i->second << endl;
		// }
		ll ans = 0;
		rep(i,0,n-1){
			if( m.count(sum-a[i]) ){
				
				if(2*a[i] ==  sum )
					ans += (m[a[i]] -1);
					
				else 
					ans += m[(sum-a[i])];
				
			}
		}
		ans /= 2;
		cout << ans << endl;
	}

}
