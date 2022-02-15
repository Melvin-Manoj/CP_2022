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

map<string, int> m;

int findType(string s){
	int l = s.length();
	if(l == 3){
		if(s[0]==s[1] and s[1]==s[2]) return 3;
		if(s[1]==s[2]) return 2;
		return 1;
	}
	else if(l ==2 ){
		if(s[0]==s[1]) return 4;
		return 5;
	}
	return 6;
}
vector<string> retType(string s){
	vector<string> vs;
	// cout << s << endl;
	string s1, s2, s3;
	switch(findType(s)){
		case 1: s1 = {s[2],s[1],s[0]};
				s2 = {s[1] , s[0]};
				vs.push_back(s1);
				vs.push_back(s2);
				break;
		case 2: s1 = {s[2],s[1],s[0]};
			s2 = {s[1], s[0]};
			s3 = {s[0]};
			vs.push_back(s1);
			vs.push_back(s2);
			vs.push_back(s3);
			break;
		case 3: s1 = {s[2],s[1],s[0]};
			s2 = {s[1], s[0]};
			s3 = {s[0]};
			vs.push_back(s1);
			vs.push_back(s2);
			vs.push_back(s3);
			break;	
		case 4: s1 = {s[1],s[0]};
			s2 = {s[0]};
			vs.push_back(s1);
			vs.push_back(s2);
			break;
		case 5: s1 = {s[1],s[0]};
			s2 = {s[0]};
			vs.push_back(s1);
			vs.push_back(s2);
			rep(i,0,25){
				vs.push_back((char)(i+97) + s1);
			}
			break;
		case 6 : s1 = {s[0]};
			vs.push_back(s1);
			rep(i,0,25){
				vs.push_back((char)(i+97) + s1);
			}
			break;
	}
	return vs;
}
bool ispal(string s){
	string temp = s;
	reverse(temp.begin(), temp.end());
	if( temp == s) return true;
	else return false;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		m.clear();
		vector<string> vec;
		int n; cin >> n;
		rep(i,0,n-1) {
			string s; cin >> s;
			m[s] = i;
			vec.push_back(s);
		}
		bool flag = false;
		bool ans = false;
		rep(i,0,n-1){
			if(ispal(vec[i])) flag = 1;
			vector<string> newv = retType(vec[i]);
			// print(newv);
			for(string ele: newv){
				if(m.count(ele)){
					if(m[ele] > i){
						ans = true;
						flag = true;
						break;
					}
				}
			}
			if(flag) break;
		}
		if(flag ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    // print(retType("a"));
}
