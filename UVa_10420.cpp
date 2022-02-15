
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
		int a, b, c; cin >> a >> b >> c;
		int m1 = (2*b-c)%a == 0 ? (2*b-c)/a : -1;
		int m2 = (a+c)%(2*b) == 0 ? (a+c)/(2*b) : -1;
		int m3 = (2*b-a)%c == 0 ? (2*b-a)/c : -1;

		if(m1 > 0 or m2 > 0 or m3 > 0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;

	}
}
