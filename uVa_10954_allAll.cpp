
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
	while(true){
		int n; cin >> n;
		if(n == 0) return 0;
		priority_queue <int> a;
		rep(i,1,n){
			int x; cin >> x;
			a.emplace(-x);
		} 
		ll cost = 0;
		while(a.size() > 1){
			int A = -1*a.top(); a.pop();
			int B = -1*a.top(); a.pop();
			cost += (A+B);
			a.emplace(-(A+B));
		}
		cout << cost << endl;
	}
}
