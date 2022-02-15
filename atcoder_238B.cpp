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

const ll mod = 998244353;
const int inf = 1e9 + 1e8;

ll finD(ll n){
	int cnt = 0;
	while(n != 0){
		cnt++; 
		n/= 10;
	}
	return cnt;
}
ll pr(ll n, int exp){
	ll val = 1;
	while(exp--) val *= n;
	return val;
}
int main(){
	ll n; cin >> n;
	ll d = finD(n); d--;
	ll ans = 0;

	ll a1 = 1 + n - pr(10, d);
	ans += (a1%mod * (a1+1)%mod)/2;
	ans %= mod;
de(ans);

	while(d > 0){
		ll b = pr(10, d) - pr(10, d-1);
		ans += (b%mod * (b+1)%mod)/2;
		ans %= mod; 
		d--;
		de(b);de(ans);
	}
	cout << ans << endl;

}
