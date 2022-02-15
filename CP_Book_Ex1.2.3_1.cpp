
#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
using namespace std;
typedef long long int ll;

ll poww(ll a, ll b){
	ll ans = 1;
	while(b--){
		ans *= a;
	} return ans;
}

int main(){
	int x = 10, y = 16;

	string s = "65743";

	unsigned long long int mid =0;
	int n = s.length();
	rep(i,0,n-1){
		// de(mid);
		if(isdigit(s[i])){
			mid += ( (s[i] - '0') * poww(x, n-i-1) );
		}
		else if(isalpha(s[i])){
			mid += ( (s[i] - 'A' + 10) *  poww(x, n-i-1));
		}
		else{
			cout << "invalid number detected" << endl;
			return -1;
		}
	}
	// de(mid);
	string ans = "";
	while(mid != 0){
		// de(mid);
		// de(ans);
		int rem = mid % y;
		if(rem > 9){
			ans = char(65 + rem - 10) + ans;
		}
		else{
			ans = to_string(rem) + ans;
		}
		mid = mid/y;
	}

	cout << ans << endl;
}
