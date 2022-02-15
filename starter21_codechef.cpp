
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;

#define ff first
#define ss second
#define pii pair<int,int>

int const inf = 1*(1e9 + 100); 
using namespace std;

ll const maxm = 1e5+3;
ll const mod = 1e9+7;

int atleO(int a, int b){
	if(a%2 == 0 and b%2 != 0) return true;
	if(a%2 != 0 and b%2 == 0) return true;
	return false;
}

int main(){
	
	int t; cin >> t;
	while(t--){
		int n, x, y;
		cin >> n >> x >> y;

		int c = (n+1)/2;

		// if(abs(x-c)%2 == 0 and abs(y-c)%2 == 0){
		// 	cout << "0" << endl;
		// 	continue;	
		// }
		// else 
		if(atleO(x-c, y-c)) cout << "1" << endl;
		else
			cout << "0" << endl;
		
	}
}
