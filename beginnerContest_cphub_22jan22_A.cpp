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
	
	int n; cin >> n;

	vi prime(n+1, 0);
	rep(i,2,n){
		bool ok = true;
		rep(j,2,i-1){
			if(i % j == 0){
				ok = false;
				break;
			}
		}
		if(ok) prime[i] = 1;
	}
	vi pp;

	rep(i,2,n){
		if(prime[i] ) pp.push_back(i);
	}
	// print(pp);
	int final_ans = 0;
	for(int kk = 3; kk <= n ; kk += 2){
		int nn = kk;
		vi ans;
		int l = pp.size(), i = 0;int count = 0;
		while(nn > 0 and i < l){
			
			if(nn%pp[i] == 0) {
				nn /= pp[i];
				count++;
			}
			else{
				ans.push_back(count);
				count = 0;
				i++;
			}

		}
		int answer = 1;
		for(int ele : ans){
			answer *= ele+1;
		}
		if(answer == 8) {
			final_ans++;
			// cout << kk << endl;
		}
	}
	cout << final_ans << endl;
}
