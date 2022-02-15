
#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

const int mod = 1e9 +7;



int main(){
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		int m,n; cin >>m >> n;
		int ans;
		int rows = m%2 == 0 ? m/2 : (m+1)/2;
		int cols = n%2 == 0 ? n/2 : (n+1)/2;
		switch(c){
			case 'r': ans = min(m,n);
			break;
			case 'k': 
				if((n*m)%2 == 0) ans = (n*m)/2;
				else ans = (n*m)/2 +1;
				// ans = max(rows*cols , n*m - rows*cols);
				break;
			case 'K': 
				ans = rows*cols;
				break;
			case 'Q':
				if(m > n) swap(m,n);
				if(m == n){
					if(m%2 == 0) ans = m;
					else if((m-1)%4 == 0) ans = m;

					else ans = m-1;
				}
				else{
					ans = m;
				}
		}
		cout << ans << endl;

	}
}
