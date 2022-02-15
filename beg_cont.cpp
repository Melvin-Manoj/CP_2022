
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

ll const inf = -1*(1e9+1e8); 
using namespace std;

ll const maxm = 1e5+3;
ll const mod = 1e9+7;



int main(){
	ll n, m, ta, tb, k; cin >> n >> m >> ta >> tb >> k;

	vi a(n), b(m);
	rep(i,0,n-1){
		cin >> a[i]; a[i] += ta;	
	} 
	reverse(a.begin(), a.end());
	// print(a);
	rep(i,0,m-1) cin >> b[i];

	vi st = b;
	//to get the fastest arrival time at the end
	reverse(st.begin(), st.end());
	// print(st);

	int ptr = n-1;
	int i = 0;
	int ans = inf;
	while(ptr >= 0 and i<=k){
		// cout << "main- " << ptr << endl;
		// de(ans);
		int p = st.size()-1;
		// de(p);
		while(p >= 0 and !st.empty()){
			if(st[p] < a[ptr]){
				st.pop_back();
				p--;
				continue;
			}
			// de(p);
			int ni = p - (k-i) >= 0 ? p-(k-i) : 0; // simulating the deletion of k - i nodes, 
			//i nodes have already been deleted from stack a
			if(p - (k-i) < 0){
				cout << -1 << endl;
				return 0;
			}
			// de(ni);
			if(st[ni] + tb > ans){
				ans = st[ni] + tb;
				// cout << "this is the ans " << ans << endl;
			}
			break;
		}
		if(st.empty()){
			ans = -1;
			break;
		}
		ptr--;
		i++;
	}
	if(i <= k and ptr == -1) ans = -1;
	cout << ans << endl;

}
