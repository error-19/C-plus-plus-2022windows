#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int> v1;
for(int i=0;i<t;i++){
    int k;
    cin>>k;
    v1.push_back(k);
}
vector<int>v2;
for(int i=0;i<v1.size();i++){
    v2.push_back(v1[i]);
}
for(auto u:v2){
    cout<<u<<endl;
}
}
