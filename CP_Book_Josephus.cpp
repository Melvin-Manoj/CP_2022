
#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
using namespace std;
typedef long long int ll;
typedef vector<int> vi;

ll poww(ll a, ll b){
	ll ans = 1;
	while(b--){
		ans *= a;
	} return ans;
}

class Crim
{
public:
	int no = -1;
	Crim* next, *prev;
	Crim(int n = -1){
		no = n;
	}
	void del(){
		prev-> next;
	}

	bool only2(){
		if(prev == next) return true;
		else return false;
	}

};
int main(){
	int n, k; cin >> n >> k;

	vector<Crim> a(n+1);
	a[1] = Crim(1);
	a[n] = Crim(n);
	rep(i,1, n-1){
		// a[i] = Crim(i, a[i-1], a[i+1]);
		a[i] = Crim(i);
		a[i].next = &a[i+1];
		a[i].prev = &a[i-1];
	}
	a[1].next = &a[2];
	a[1].prev = &a[n];
	a[n].next = &a[1];
	a[n].prev = &a[n-1];

	Crim run = a[k];
	while(!run.only2()){
		cout << run.no << endl;
		run.del();
	}
	run = *run.next;

	cout << run.no << endl;


}
