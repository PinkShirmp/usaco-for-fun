#include <bits/stdc++.h>
using namespace std;
#define fr(i,start,end) for(int i=start;i<end;i++)
#define fre(x,arr) for(auto x : arr)
const int maxval=1e6;
int n,cnt[maxval+1],x;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  fr(i,0,n){
    cin>>x;
    const int up=(int)sqrt(x);
    for(int j=1;j<=up;j++){
      if(x%j==0){
        ++cnt[j];
        if(j!=x/j) cnt[x/j]++;  
      }
    }
  }
   for(int k=maxval;k>=1;k--){
        if(cnt[k]>=2){
          cout<<k<<"\n";
          break;
        }
      }

}
/*
  ⬛⬛⬛⬛⬛⬛⬛🌸
  ⬛⬛⬛⬛⬛⬛🌸⬛
  ⬛⬛🏻🏻🏻🏻⬛🌸
  ⬛🏻🏻🏻🏻🏻🏻⬛
  ⬛⬛⬛🏻🏻⬛⬛⬛
  ⬛⬜🟪🏻🏻🟪⬜⬛
  ⬛🏻🏻🏻🏻🏻🏻⬛
  ⬛🟩🟩🟩🟩🟩🟩⬛
      Solirous
*/

