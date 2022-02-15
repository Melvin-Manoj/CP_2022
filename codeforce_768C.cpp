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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		// cout << endl;
		int n, k; cin >> n >> k;

		int p = 0;
		while(n > 1){
			n /= 2;
			p++;
		}
		//
		n = (1<<p )-1;
		if(k == n ){
			if(n < 7){
				cout << -1 << endl;
				continue;
			}
			else{
				cout << n << " " << n-1 << endl;
				cout << "1 3" << endl;
				cout << "0 " << n-3 << endl;
				int hf = (1 << (p-1));
				rep(j,2,hf-1){
					if(j == 3) continue;
					int i = j;
					int i2 = n-j;
					cout << i << " " << i2 << endl;
				}
				continue;
			}
		}
		if(k == 0){
			cout << k << " " << n << endl;
		}
		int hf = (1 << (p-1));
		rep(j,1,hf-1){
			int i = j;
			int i2 = n-j;
			// de(i);de(i2);
			if(i == k or i2 ==k){
				if(i2 == k) {
					int temp = i2;
					i2 =i;
					i = temp;
				}
				// cout << "hello" << endl;
				// de(i);de(i2);
				cout << 0 << " " << i2 << endl;
				cout << k << " " << n << endl;
			}
			else cout << i << " " << i2 << endl;
		}


		//
// 		if( k == ((1 << p)-1)){
// 			cout << -1 << endl;
// 			continue;
// 		}
// // de(p);
// 		if(k == 0){
// 			int i2 = (1<<p)-1;
// 			cout << k << " " << i2 << endl;
// 		}
		// rep(j,1, (1<<(p-1)) - 1){
		// 	// de(i);
		// 	int i2 = (1<<p)-1-j;
		// 	int i = j;
		// 	// cout << "i= " << i << " i2 = " << i2 << " k:" << k <<endl;
		// 	if(i == k or i2 == k){
		// 		if(i2 == k) swap(i,i2); //i = k
		// 		cout << k << " " << ((1<<p)-1) << endl;
		// 		cout << i2 << " 0" << endl;

		// 	}
		// 	else{
		// 		cout << i << " " << i2 << endl;
		// 	}
		// }

		

	}
}
