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

const ll mod = 998244353;
const int inf = 1e9 + 1e8;


int main(){
	int t; cin >> t;
	while(t--){
		ll a, s; cin >> a >>s;

		if(s >= 2*a){
			if( ((s-a) & a) == a ) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}


}
