
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

void solve(){
	map<string,int> trees;
	string inp;
	while(true){
		
		getline(cin, inp);
		if(inp == ""){
			break;
		}
		if(trees.find(inp) != trees.end()){
			trees[inp]++;
		}
		else{
			trees[inp] = 1;
		}
	}
	ll total = 0;
	for(auto itr = trees.begin(); itr != trees.end(); itr++){
		total += itr->second;
	}
	for(auto itr = trees.begin(); itr != trees.end(); itr++){
		cout << setprecision(4) << fixed;
		cout << itr->first << " "  <<((double)(itr->second*100) / total) << endl;
	}
	cout << endl;
}

int main(){
	int t; cin >> t; 
	string inp;
	getline(cin, inp);
	getline(cin, inp);
	while(t){
		// cout << t << endl;
		solve();
		t--;
	}
	
}
