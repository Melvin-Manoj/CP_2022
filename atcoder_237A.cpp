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
	string s; cin >> s;
	int n = s.length();
	int la = 0, ra = 0;
	per(i,n-1,0)
		if(s[i] == 'a') ra++;
		else break;
	rep(i,0,n-1){
		if(s[i] == 'a') la++;
		else break;
	}
	if(la > ra){
		cout << "No" << endl;
		return 0;
	}
	string rev = s.substr(la, n-ra-la);
	// de(rev);
	reverse(rev.begin(), rev.end());
	// de(rev);
	if(rev == s.substr(la, n-ra-la) ) cout << "Yes" << endl;
	else cout << "No" << endl;

}
