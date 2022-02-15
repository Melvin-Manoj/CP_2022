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
const int inf = 1e9 + 1e8;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	string s; cin >> s;
	ll k ; cin >> k;

	int n = s.length();
	int ilast = -1;
	char ans;
	rep(i,0,n-1){
		if(s[i] == '1') ilast = i+1;
		else {
			ans = s[i];
			break;
		}
	}
	if(k <= ilast){
		cout << '1' << endl;

	}
	else{
		cout << ans << endl;
	}

}
