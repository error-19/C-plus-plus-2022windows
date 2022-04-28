#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,r,sum=0;
cin>>t;
cin>>r;
vector<int>v1;
for(int i=0;i<t;i++){
    int k;
    cin>>k;
    v1.push_back(k);
}
sort(v1.begin(),v1.end());
//for(auto u:v1){
//    cout<<u<<" "<<endl;
//}
for(int i=0;i<r;i++){
        if(v1[i]<=0){
    sum=sum+abs(v1[i]);
        }
        else{
            continue;
        }
}
cout<<abs(sum);
}
