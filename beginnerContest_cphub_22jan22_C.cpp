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
	
	int n; cin >> n;

	vi x(n+1), y(n+1), h(n+1);
	rep(i,0,n-1){
		cin >> x[i] >> y[i] >> h[i];
	}
	bool flag = false;
	pii ans;
	int H, H0;
	rep(cx, 0, 100){
		rep(cy, 0, 100){
			H0 = h[0] + abs(x[0]-cx) + abs(y[0] - cy);
			bool ok = true;
			rep(i,0,n-1){
				H = h[i] + abs(x[i]-cx) + abs(y[i] - cy);
				if(H != H0 or H0 < 1){
					ok = false;
					break;
				}
			}
			if(ok){
				flag = true;
				ans = {cx, cy};
				break;
			}
		}
		if(flag) break;
	}
	
	cout << ans.first << " " << ans.second << " " << H0 << endl; 

}
