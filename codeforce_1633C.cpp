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


ll hc, dc, hm, dm; 
ll k,w , a;
int main(){
	int t; cin >> t;
	while(t--){
		cin >> hc >> dc >> hm >> dm;
		cin >> k >> w >> a;
		bool flag = false;
		rep(i,0, k){
			//i is coins spent on health
			if(ceil((long double)(hc+i*a)/(long double)dm)  < 
				ceil((long double)(hm)/(long double)(dc + (k-i)*w))){
				continue;
			}
			else{
				flag = true;
				break;
			}
		}
		if(flag)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;


		// ll ch = k; //ch is coins spent on health
		// ll cl = 0;
		// bool flag = false;
		// while(ch > cl){
		// 	ll mid = cl + (ch-cl)/2;
		// 	if(defeatable(hc + mid*a , dc + mid*w)){
		// 		flag = true;
		// 	}
		// 	else if()
		// }
	}
}
