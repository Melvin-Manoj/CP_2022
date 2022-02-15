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
	int n; cin >> n;
	string s; cin >>s;
	
	deque<int> deq{n};
	per(i,n-1,0){
		if(s[i] == 'R') deq.push_front(i);
		else deq.push_back(i);
	}
	print(deq);

}
