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
	int t = 199;
	map<double,int> m;
	while(t--){
		double x; cin >> x;
		m[x]++;
	}
	for(auto i = m.begin(); i != m.end(); ++i){
		cout << i->first << "\t" << i->second << endl;
	}
}
