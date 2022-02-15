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
		int n, k; cin >> n >> k;

		vi a(n), b(n);
		vector<pii> arr(n);
		rep(i,0,n-1) cin >> a[i];
		rep(i,0,n-1) cin >> b[i];
		rep(i,0,n-1) {
			arr[i] = {a[i], b[i]};
		}
		sort(arr.begin(), arr.end());
		// rep(i,0,n-1){
		// 	cout << arr[i].first << " " << arr[i].second << endl;
		// }
		rep(i,0,n-1){
			if(arr[i].first <= k) k += arr[i].second;
			else break;
		}
		cout << k << endl;
	}

}
