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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int l, r, k; cin >> l >> r >> k;

		if(l == r ) {
			if(l == 1) cout << "NO" << endl;
			else cout << "YES" << endl;
			continue;
		}
		int n = (r-l+1);
		if(n%2 == 1){
			if((l%2 == 1 and k >= (n+1)/2) or (l%2 == 0 and k >= n/2) ){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else{
			if(k >= n/2) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

}
