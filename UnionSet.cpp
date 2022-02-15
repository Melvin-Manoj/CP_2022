
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
#define ff first
#define ss second

const int mod = 1e9 +7;

vi p, n_rank;

int findSet(int i){
	return (p[i] == i ? i : p[i] = findSet(p[i]));
}
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j){
	if(!isSameSet(i, j)){
		int x = findSet(i), y = findSet(j);
		if(n_rank[x] > n_rank[y]) p[y] = x;
		else{
			p[x] = y;
			if(n_rank[x] == n_rank[y]) n_rank[y]++;
		}
	}
}
int main(){
}
