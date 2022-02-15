
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

	de(l); de(r);
	if(!model(a)){
		

		cout << "hello"<< endl;
		string sa = "";
		if(l == 1){}
		// else if(l==2) sa = "10";
		else{
			sa = "10";
			rep(i,3,l){
				sa += "1";
			}
			int inipos = l-2;
			while(a < stoi(sa,0,2)){
				sa = rot(sa);
				inipos--;
			}	
		cout << "ans a+=" << inipos<< endl;
			ans += inipos;
		}
		
		l++;
	}
	if(!model(b)){
		string sa = "";
		if(r == 1){}
		// else if(r==2) sa = "10";
		else{
			sa = "10";
			rep(i,3,r){
				sa += "1";
			}
			int inipos = 1;
			// cout << (1<<(r+1) ) << endl;
			if(b!= (1<<(r) )-1 ){
				while(b >= stoi(sa,0,2)){
					sa = rot(sa);
					inipos++;
				}	
			}
			else inipos = r-1;
			cout << "ans b+=" << inipos<< endl;
			ans += inipos;
		}
		// de(sa);
	}r--;

	if(l <= r){
		rep(i,l,r) ans += (i-1);
	}
	cout << ans << endl;
}
