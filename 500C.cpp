
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

ll const maxm = 1e6+3;
ll const mod = 1e9+7;


int main(){
	int n, m; cin >> n >> m;
	vi w(n+1);
	rep(i,1,n) cin >> w[i];
	vi b(m); 
	rep(i,0,m-1) cin >> b[i];

	vi stack(maxm);
	int ptr = 0;

	vector<bool> added(n, false);
	rep(i,0,m-1){
		if(!added[ b[i] ]){
			stack[ptr] = b[i];
			added[ b[i] ] = true;
			ptr++;
		}
	}
	reverse(stack.begin(), stack.begin()+ptr);
	//initial stack has been created
	//now, simulate it to find the ans
	ll ans = 0;
	rep(i,0,m-1){
		int pointer = ptr-1;
		ll weight = 0;
		per(j,pointer, 0){
			if(stack[j] == b[i]){
				stack[ptr] = b[i];
				ptr++;
				stack[j] = -1;
				ans += weight;
				break;
			}
			else{
				if(stack[j] != -1)
					weight += w[stack[j]];
			}
		}
	}
	cout << ans << endl;

}
