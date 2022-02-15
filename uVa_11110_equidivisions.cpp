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

int fill(int r, int c, char c1, char c2){
	if(r < 1 || r > n || c < 1 || c > n) return 0;
	if(a[r][c] != c1) return 0;
	int ans = 1;
	a[r][c] = c2;
	rep(i,0,3){
		int next_r = r + dr[i], next_c = c + dc[i];
		// if(next_c == n) next_c = 0;
		// if(next_c == -1) next_c = n-1;
		ans += fill(next_r, next_c, c1, c2);
	}
	return ans;
}

void putin(string s, char no){
	// de(no);
	// de(s);cout << s.length() << endl;
	int i = 0;

	while(i < s.length() and !isspace(s[i])){
		int r = s[i] - '0';
		int c = s[i+2] - '0';
		i += 4;
		a[r][c] = no;
	}
	// cout <<"ended" << endl;
}
bool solve(){
	rep(i,1,n){
		rep(j,1,n){
			if(a[i][j] == '.') continue;
			int ind = a[i][j] - '0';
			// de(ind);
			if(!done[ ind]){
				// de(done[a[i][j]]);

				// de(a[i][j] -'0');
				if(fill(i, j, a[i][j], '.') != n) return false;
				done[ ind] = true;
				// de(done[ a[i][j] ]);
			}
			else{
				return false;
			}
		// 	rep(i,1,n){
		// 	print(a[i]); 
		// }cout << endl;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	while(true){
		string nn; getline(cin, nn);
		n = stoi(nn);
		if(n == 0) return 0;
		a.assign(n+1, vector<char>(n+1,'0'));
		done.assign(110, false);
		
		string inp; 
		rep(i,1,n-1){
			getline(cin, inp);
			putin(inp, (char)(i+'0'));
		}

		rep(i,1,n){
			rep(j,1,n){
				cout << a[i][j] << " ";
			}cout << endl;
		}cout << endl;

		if(solve())
			cout << "good" << endl;
		else 
			cout << "wrong" << endl;
	}
	
}
