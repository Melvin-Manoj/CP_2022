
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
    	int n = s.length();

    	string mm = "";
    	rep(i,0,n-2){
    		int no = (s[i]-'0') + (s[i+1]-'0');
    		char c = no + '0';
    		// de(no);
    		string t;
    		if(i <= n-3 and n>2) {
    			t = s.substr(0, i) + c +s.substr(i+2, string::npos);
    		}
    		else {
    			t = s.substr(0, i) + c;
    		}
    		if(t > mm) mm = t;

    	}
    	cout << mm << endl;
    }
	
}
