
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

    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	sort(s.begin(), s.end());
    	cout << s << endl;
    }
	
}
