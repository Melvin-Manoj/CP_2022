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

	int n; cin >> n;
	vector<ll> dp(n+1,inf);

	rep(i,1,9) dp[i] = 1;
	rep(i, 10, n){
		int temp = n;
		ll ans = inf;
		cout << "i: " << i << endl;
		while(temp != 0){
			if((n - temp%10) != n){
				// cout <<"hello" << endl;
				ans = min(dp[(n - temp%10)]+1, ans);
			}
			cout << "\t" << ans << endl;
			temp /= 10;
		}
		dp[i] = ans;
	}
	cout << dp[n] << endl;


}
