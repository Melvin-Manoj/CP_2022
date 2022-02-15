
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


int main(){
	int x; cin >> x;
	string s; cin >> s; cin >> s;
	
	int ans;
	if(s == "week"){
		if(x == 5 or x == 6) ans = 53;
		else ans = 52;
	}
	else{
		if(x<=29) ans = 12;
		else if(x==30) ans = 11;
		else ans = 7;
	}
	
	cout << ans << endl;
}
