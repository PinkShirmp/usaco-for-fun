#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,start,end) for(int i=start;i<end;i++)
#define fre(x,arr) for(auto x : arr)

int n;
signed main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  vector<int> copr;
  for(int i=1;i<=n;i++){
    if(__gcd(i,n)==1){
      copr.push_back(i);
    }
  }
  vector<int> pref(copr.size());
  pref[0]=1;
  for(int i=1;i<copr.size();i++){
    pref[i]=(copr[i]*pref[i-1])%n;
  }
  int res=0;
  for(int i=0;i<copr.size();i++){
    if(pref[i]==1){
      res=i+1;
    }
  }
  cout<<res<<"\n";
  for(int i=0;i<res;i++){
    cout<<copr[i]<<" ";
  }
}

