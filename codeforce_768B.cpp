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
		int n; cin >> n;
		vi a(n), b(n);
		rep(i,0,n-1) cin >> a[i];
		
		int sz = 0, cnt = 0; //size
		int y = a[n-1];
		per(i,n-1,0){
			if(a[i] == y){
				sz++;

			}
			else{
				cnt++;
				int l = max(0, i-(sz-1));
				sz *= 2;
				i = l;
			}
		}
		cout << cnt <<

	}
}
