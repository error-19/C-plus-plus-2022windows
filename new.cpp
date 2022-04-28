#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,a=0,b;
   cin>>t;
   vector<int>v1;
   for(int i=0;i<t;i++){
    int k;
    cin>>k;
    v1.push_back(k);
   }
    vector<int>v2;
   for(int i=0;i<t;i++){
    int p;
    cin>>p;
    v2.push_back(p);
   }
    for(int i=0;i<t;i++){
        if(v1[i]>v2[i]){
            swap(v1[i],v2[i]);
        }
        }


         for(int i=0;i<v1.size()-1;i++){
            cout<<abs(v1[i+1]-v1[i])<<endl;
         }

          for(int i=0;i<v2.size()-1;i++){
            cout<<abs(v2[i+1]-v2[i])<<endl;
         }





}

