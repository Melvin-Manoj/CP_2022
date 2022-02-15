
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

int atleO(int a, int b){
	if(a%2 == 0 and b%2 != 0) return true;
	if(a%2 != 0 and b%2 == 0) return true;
	return false;
}

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vi a(n);
		rep(i,0,n-1) cin >> a[i];

		vector<bool> ans(32,false);
		rep(i,0,32){
			int pat = 1 << i;
			int count = 0;
			rep(j,0,n-1){
				if((a[j] & pat) == pat){
					count++;
					if(count >= 2) break;
				}
				
			}
			if(count >= 2) ans[i] = true;
		}
		int bbb =0;
		rep(i,0,31){
			if(ans[i]){
				bbb += (1<<i);
			}
		}
		cout << bbb << endl;
		
	}
}
