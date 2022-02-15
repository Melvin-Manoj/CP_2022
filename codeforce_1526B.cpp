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



int main(){
	int t; cin >> t;
	vi a{ 1111111, 11111,  111, 11};
	// ll b = 1111111111;
	// while(b != 0){
	// 	cout << b << ", ";
	// 	b/= 10;
	// }
	while(t--){
		int x; cin >> x;
		// vi div(3), rem(3);
		// rep(i,0,3){
		// 	div[i] = x/a[i];
		// 	rem[i] = x%a[i];
		// 	x = rem[i];
		// 	de(x);
		// }
		// if(x == 0) cout << "Yes" << endl;
		// else cout << "No" << endl;
		bool ans = false;
		rep(i,0, 11){
			if(x%11 == 0){
				ans = true; break;
			}
			x -= 111;
			if(x < 0) break;
		}
		if(ans) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
