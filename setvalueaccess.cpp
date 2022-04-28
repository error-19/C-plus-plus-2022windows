#include<bits/stdc++.h>
using namespace std;
int main(){
long long y;
cin>>y;
while(y--){
long long t,d,c=0;
  cin>>t;
  vector<int>v;
  for(int i=0;i<t;i++){
  long long k;
  cin>>k;
  v.push_back(k);
  }
  sort(v.rbegin(),v.rend());
//
//  for(int i=0;i<v.size();i++){
//  c++;
//  }
//  if(c==1){
//  if(v[0]>1){
//  cout<<"No"<<endl;
//  }
//  else{cout<<"Yes"<<endl;}
//  }
  d=v[0]-v[1];
  if(d>1) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
}
}
