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

vector<vector<char>> a;
vector <bool> done;
int n; 
int dr[] = {1, 0, -1, 0}; //S E N W
int dc[] = {0, 1, 0, -1};

vector<bool> active(31,0);
vector<bool> strong(31,0);
int fill_map(string str){
	stringstream ss(str);
	char c;int i = 0;
	while(ss >> c){
		active[c-'A'] = 1;
		i++;
	}
	return i;
}
vector<vi> adjList;
void fillEdges(string str){
	stringstream ss(str);
	string s;
	while(ss >> s){
		adjList[ s[0]-'A'].push_back(s[2]-'A');
		strong[s[2]-'A'] = true;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		string s;
		getline(cin, s); //blank line
		getline(cin, s);
		int v = fill_map(s);
		adjList.assign(v, vi);
		getline(cin, s);
		fillEdges(s);

		rep(i,0,30){
			if(active[i]){
				if(!strong[i]){
					rep(j,0,30){
						if(active[j]){
							adjList[j].push_back(i);
							adjList[i].push_back(j);
						}
					}
				}
			}
		}
	}
}
