#include <bits/stdc++.h>
#define ll long long int
#define vi vector<ll>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;

using namespace std;


bool pred(vi &a, int n, int k){
	// checks if the smallest heap can have a value of k
	vi extra(n+1,0);
	per(i,n,3){
		int maxd = k > extra[i] ? (a[i]-k+extra[i])/3 : a[i]/3;
		
		if(a[i]-k + extra[i] < 0) return false;
		extra[i-1] += maxd;
		extra[i-2] += 2*maxd;
		
	}
	//for 1 and 2
	if(k > extra[2] + a[2]) return false;
	if(k > extra[1] + a[1]) return false;
	
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){

		int n; cin >> n;
		vi h(n+1);
		rep(i,1,n) cin >> h[i];

		int l=1, r = 1e9;
		int lowest = -1; // this is the maximum possible value attainable for the smallest heap
		while(l <= r){
			int mid = l + (r-l)/2;

			if(pred(h, n, mid)){ // if this value of mid is achievable. it's a 1 in 1 1 1 1 0 0 
				lowest = mid;
				l = mid+1;
			}
			else r = mid-1;
		}
		cout << lowest << endl;
	}
}