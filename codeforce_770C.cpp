#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
#define ff first
#define ss second
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;


const int mod = 1e9 +7;
const int inf = 1e9 + 1e8;


bool ispal(string s){
	string r = s;
	reverse(s.begin(), s.end());
	if(s == r) return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		
		if(n%2 != 0 and ( k > 1)){
			cout << "NO" << endl;
			continue;
		}
		vector<vi> a(n, vi(k));

		int v = 1;
		for(int i = 0; i<n; i += 2){
			rep(j,0,k-1){
				a[i][j] = v;
				v += 2;
			}
		}
		for(int i = 1; i<n; i += 2){
			rep(j,0,k-1){
				a[i][j] = a[i-1][j] + 1;
			}
		}
		cout << "YES" << endl;
		rep(i,0,n-1){
			print(a[i]);
		}
	}
}
