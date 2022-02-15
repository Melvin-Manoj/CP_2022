
#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
using namespace std;

int main(){
	int x = 10, y = 16;

	string s = "65743";

	unsigned long long int mid =0;
	int n = s.length();
	rep(i,0,n-1){
		// de(mid);
		if(isdigit(s[i])){
			mid += ( (s[i] - '0') * pow(x, n-i-1) );
		}
		else if(isalpha(s[i])){
			mid += ( (s[i] - 'A' + 10) *  pow(x, n-i-1));
		}
		else{
			cout << "invalid number detected" << endl;
			break;
		}
	}
	// de(mid);
	string ans = "";
	while(mid != 0){
		int rem = mid % y;
		if(rem > 9){
			ans += char(65 + rem - 10);
		}
		else{
			ans = to_string(rem) + ans;
		}
		mid = mid/y;
	}

	cout << ans << endl;
}
