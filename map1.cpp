#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    vector<string> v={"shamim","karim","rahim","abul","mokbul"};
    map<string,int>c;
    for(auto u:v){
       c[u]++;
    }
     for(auto u:c){
        cout<<u.first<<" "<<u.second<<endl;
    }
//map<string,int>id=;
//id["shamim"]=2;
//id["sorkar"]=3;
//id["shamim"]=4;
//id["rizvy"]=5;
//id["riva"]=9;
// for(auto u:id){
//    cout<<u.first<<" " <<u.second<<endl;
// }
}
