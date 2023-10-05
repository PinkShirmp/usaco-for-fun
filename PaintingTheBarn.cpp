#include <bits/stdc++.h>
using namespace std;
#define fr(i,start,end) for(int i=start;i<end;i++)
#define fre(x,arr) for(auto x : arr)
int n,k;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  freopen("paintbarn.in","r",stdin);
  freopen("paintbarn.out","w",stdout);
  cin>>n>>k;
  const int width =1000;
  int barn[width+1][width+1];
  int x1,y1,x2,y2;
  fr(i,0,n){
   cin>>x1>>y1>>x2>>y2;
   barn[x1][y1]++;
   barn[x1][y2]--;
   barn[x2][y1]--;
   barn[x2][y2]++;
  }
  int res=0;
  fr(x,0,width){
    fr(y,0,width){
      if(x>0)barn[x][y]+=barn[x-1][y];
      if(y>0)barn[x][y]+=barn[x][y-1];
      if(x>0&&y>0) barn[x][y]-=barn[x-1][y-1];
      res+= barn[x][y]==k;
    }
  }
  cout<<res<<'\n';
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

