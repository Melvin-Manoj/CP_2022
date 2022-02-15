#include <bits/stdc++.h>
#define rep(i,start,end) for(int i=start;i<=end;i++)
#define per(i,start,end) for(int i=start;i>=end;i--)
#define de(x) cout << #x << " " << x << endl
#define print(container) for(auto it = container.begin(); it != container.end(); ++it)\
	{ cout << *it << " ";} cout << endl;
#define ff first
#define ss second
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;


const int mod = 1e9 +7;
const int inf = 1e9 + 1e8;



int main(){
	int n, m; cin >> n >> m;
	vector<ll> ht(n+1);
	rep(i,1,n) cin >> ht[i];
	vector<vector<ll>> adj(n+1);

	//calculating the max sadness
	ll max_sad = 0; // added to make the graph positively weighted
	//it's a -ve value
	rep(i,1,m){
		ll u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		if(ht[u] > ht[v]) swap(u,v);
		max_sad = max(max_sad, 2*(ht[v]-ht[u]));
	}
// de(max_sad);
	vector<ll> no_e(n+1, inf); no_e[1] = 0;
	//dijstra
	vector<ll> dist(n+1, inf); dist[1] = 0;
	priority_queue<pii, vector<pii>,greater<pii>> pq; pq.push({0,1});

	while(!pq.empty()){
		pii front = pq.top(); pq.pop();
		ll d = front.ff; ll u = front.ss;
		if(d == dist[u])
			for(ll v: adj[u]){

				// no_e[v] = min(no_e[v], no_e[u]+1);

				ll wt = ht[v] > ht[u] ? 2*(ht[u]-ht[v]) : ht[u]-ht[v];
				wt += max_sad; // as a offset to make all weights +ve
				// de(ht[u]); de(ht[v]);
				// de(wt);
				if(dist[v] > dist[u] + wt){
					dist[v] = dist[u] + wt;
					pq.push({dist[v], v});
					no_e[v] = no_e[u] + 1;
				}
			}
	}

	// print(dist);
	// print(no_e);


	//converting the weights to as described in the question
	vector<ll> weights(n+1); weights[0] = -inf;
	rep(i,1,n){
		weights[i] = dist[i] - no_e[i]*(max_sad);
	}
	cout << *max_element(weights.begin(), weights.end()) << endl;
	// print(weights);
	//iterate through the dist vector and find the max value
	// ll i = max_element(++dist.begin(), dist.end()) - dist.begin();
	// ll ans = dist[i] - ((ll)no_e[i]*(ll)max_sad);
	// cout << ans << endl;
}
