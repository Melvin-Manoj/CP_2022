
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

int const inf = 1*(1e9 + 100); 
using namespace std;

ll const maxm = 1e5+3;
ll const mod = 1e9+7;



int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		vi l(n+1);
		vi r(n+1);
		vi c(n+1);
		
		rep(i,1,n){
			int lll, rr, cc; cin >> lll >> rr >> cc;
			l[i] = lll;
			r[i] = rr;
			c[i] = cc;
		}

		
	}
}
