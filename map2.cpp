#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>id;
id["shamim"]=1;
id["karim"]=3;
id["rahim"]=6;
id["abul"]=7;
id["mokbul"]=10;
id["anamul"]=9;
for(auto u:id){
    cout<<u.first<<" "<<u.second<<endl;
}
}
