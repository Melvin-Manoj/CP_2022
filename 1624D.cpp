
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
		int n, k; cin >> n >> k;
		string s; cin >> s;
		vi a(27,0);
		rep(i,0,n-1){
			a[ s[i]-'a' ]++;
		}
		ll twos = 0, ones = 0;
		rep(i,0,25){
			twos += (a[i]/2);
			ones += (a[i]%2);
		}
		int ans_min = twos/k; ans_min *= 2;
		twos = twos%k;
		if((twos*2 + ones) >= k){
			ans_min++;
		}
		cout << ans_min << endl;
	}
}
