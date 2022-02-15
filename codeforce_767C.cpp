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
vi a;
int mexN;
int findMex(int l, int r,priority_queue<int> &ss){
  int mex = *ss.begin();
  rep(i,l,r){
    // de(mex);
    ss.erase(a[i]);
    // print(ss);
    mex = *ss.begin();
  }
  return mex;
}
int findInd(int l, int r, set<int> s){
  int mex = *s.begin();
  rep(i,l,r){
    s.erase(a[i]);
    mex = *s.begin();
    if(mex == mexN) return i;
  }
  return r;
}

int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    a.assign(n,0);
    rep(i,0,n-1) cin >> a[i];

    priority_queue<int> s;
    rep(i,0,n){
      s.push(-i);
    }
    // print(s);
    mexN = findMex(0,n-1, s);






    // de(mexN);
    // int l = 0, r = n-1;
    // while(l < n){
    //   // cout <<"Hello" << endl;
    //   int i = findInd(l,r,s);
    //   b.push_back(mexN);
    //   l = i+1;
    //   mexN = findMex(l,r,s);

    // }
    cout << b.size() << endl;
    print(b);

  }

}
