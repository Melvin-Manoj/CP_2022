
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

bool cucmp(pii a, pii b){
	if(a.ff < b.ff) return true;
	else return false;
}
int main(){
	ll n, m; cin >> n >>m;
	vector<bool> r(n+1, false);
	vector<bool> c(n+1, false);
	ll totr = 0, totc = 0;
	ll total = n*n;
	rep(i,1,m){
		ll x, y; cin >> x >> y;
		if(!r[x]){
			totr++;
			r[x] = true;
		}
		if(!c[y]){
			totc++;
			c[y] = true;
		}
		ll free = total - (totr*n) - (totc*n - totc*totr);
		cout << free <<" ";
	}
	cout << endl;

}
