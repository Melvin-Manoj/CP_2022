
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

ll const inf = -1*(1e18+1e16); 
using namespace std;

ll const maxm = 1e5+3;
ll const mod = 1e9+7;

vector<bool> recStack(maxm, false);
vector<bool> isVisited(maxm,false);
vector<bool> understood(maxm,false);
vector<ll> dp(maxm,-1);

string rot(string s){
	int n = s.length();
	string ans = s[0] + s.substr(1, string:: npos);
	return ans;
}

// ll count_rest(ll a, ll l){
// 	string sa = "";
// 	if(l == 1)continue;
// 	//some needs to be done here
// 	else if(l==2) sa = "10";
// 	else{
// 		sa = "10";
// 		rep(i,3,l){
// 			sa += "1";
// 		}
// 		int inipos = l-2;
// 		while(a >= stoi(sa,0,2)){
// 			sa = rot(sa);
// 			inipos--;
// 		}	
// 		ans += inipos;
// 	}
// }
bool model(ll a){
	while(a!= 0){
		if(a==1) return true;
		if(a%2 == 0) a/=2;
		else return false;
	}
	return true;
}

int main(){
	ll a, b; cin >> a >> b;

	ll l = log2(a), r = log2(b);
	++r;++l;
	ll ans = 0;

	// de(l); de(r);
	if(l == r){
		ll ref = ((ll)1<<l) - 1;
		// de(ref);
		ll corner_cases =  0;
		rep(i,0,l-2){
			ll cu_no = (ll)1<<i;
// cout << ref - cu_no << endl;
			if(ref - cu_no >= a and ref-cu_no <= b) corner_cases++;
		}
		ans += corner_cases;
		cout << ans << endl;
		return 0;
	}

	if(!model(a)){
		ll ref = ((ll)1<<l) - 1;
		ll corner_cases =  0;
		rep(i,0,l-2){
			ll cu_no = (ll)1<<i;
// cout << ref - cu_no << endl;
			if(ref - cu_no >= a) corner_cases++;
		}
	// de(corner_cases);
		ans += corner_cases;
		l++;
	}
	// if(!model(b)){
		ll ref = ((ll)1<<r) - 1;
		// de(ref);
		ll corner_cases =  0;
		rep(i,0,r-2){
			ll cu_no = (ll)1<<i;
			// cout << ref - cu_no << endl;
			if(ref - cu_no <= b) corner_cases++;
		}
	// de(corner_cases);
		ans += corner_cases;
	// }
	r--;

	if(l <= r){
		rep(i,l,r) ans += (i-1);
	}
	cout << ans << endl;
}
