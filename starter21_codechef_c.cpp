
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;

#define ff first
#define ss second
#define pii pair<int,int>

int const inf = 1*(1e9 + 100); 
using namespace std;

ll const maxm = 1e5+3;
ll const mod = 1e9+7;

int main(){
	
	int t; cin >> t;

	int n = 1e5 + 5;

	bool prime[n+1];
    memset(prime, true, sizeof(prime));
  
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }    cout << p << " ";

	while(t--){
		int N, M; cin >> N >> M;

		int m = sqrt(M ) ;


		int noDiv = 0;
		vi prime2;
		
		rep(i,2,m){
			if(prime[i]){
				if(m%i == 0){
					noDiv++;
					if(m != i) prime2.push_back(i);
				}
			}
		}

		for(int ele: prime2){
			if(prime[ele])
				noDiv++;
		}
		int ans = noDiv;
		// de(noDiv);
		if(noDiv >= N) ans = N;
		else{
			while(ans > 0){
				if(N%ans != 0) ans--;
				else break;
			}
		}
		cout << ans << endl;
	}
}
