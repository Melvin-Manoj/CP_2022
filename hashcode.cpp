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
map<string, int> like, dislike;


bool cmp(pair<string, int> &a, pair<string, int> &b){
  return a.second > b.second ;
}

int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int c; cin >> c;
  
  vector<set<string>> liked_items(c);
  vector<set<string>> disliked_items(c);

  map<string, vi> ml,md;
  rep(i,0,c-1){
    int l; cin >> l;
    rep(j,1,l){
      string s; cin >> s;
      liked_items[i].insert(s);
      like[s]++;
      ml[s].push_back(i);
    }
    int d; cin >> d;
    rep(j,1,d){
      string s; cin >> s;
      disliked_items[i].insert(s);
      dislike[s]++;
      md[s].push_back(i);
    }

  }
  set<string> ans;
  for(auto it = like.begin(); it != like.end(); it++){
    if(dislike[it->first] < it->second) ans.insert(it->first);
  }
  cout << ans.size() << " ";
  print(ans);


  int customers_no = 0;
  rep(i,0,c-1){
    bool flag = true;
    for(string ing : liked_items[i]){

      if(ans.count(ing) == 0  ){
        flag = false;
        break;
      }
    }
    for(string ing : disliked_items[i]){

      if(ans.count(ing) != 0  ){
        flag = false;
        break;
      }
    }
    if(flag) customers_no++;
  }

  de(customers_no);


  // cout << "likes people" << endl;
  // for(auto it = ml.begin(); it!=ml.end(); it++){
  //   cout << it->first << "\t";
  //   for(int ele : it->second) cout << ele << " ";
  //   cout << endl;
  // }
  // cout << "dislikes people" << endl;
  // // for(auto it = md.begin(); it!=md.end(); it++){
  // //   cout << it->first << "\t" << it->second << endl;
  // // }
  // // sort(like.begin(), like.end(),cmp);
  // // sort(dislike.begin(), dislike.end());
  // vector<pair<string,int>> like_set(like.begin(), like.end());
  // sort(like_set.begin(), like_set.end(), cmp);

  // for(auto it = like_set.begin(); it!=like_set.end(); it++){
  //   cout << it->first << "\t" << it->second << endl;
  // }
  // cout << "\ndislike" << endl;
  // for(auto it = dislike.begin(); it!=dislike.end(); it++){
  //   cout << it->first << "\t" << it->second << endl;
  // }
}
