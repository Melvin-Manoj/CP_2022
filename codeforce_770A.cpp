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
		string s; cin >> s;
		if(n == 1 or ispal(s)){
			cout << 1 << endl;
			continue;
		}
		if(k < 2){
			cout << 1 << endl;
			continue;
		}
		cout << 2 << endl;
	}
}
