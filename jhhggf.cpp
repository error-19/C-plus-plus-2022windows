#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
//unordered_set<int>s;
vector<int>v1;
for(int i=0;i<2*t;i++){
    int k;
    cin>>k;
    v1.push_back(k);
}
for(int i=0;i<v1.size()-1;i++){
    for(int j=i+1;j<v1.size();j++){
    if(v1[i]==v1[j]){
       v1.erase(v1.begin()+j);
    }
}
}

for(auto u:v1){
    cout<<u<<" ";
}
}

