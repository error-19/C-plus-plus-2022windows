#include<bits/stdc++.h>
using namespace std;
int main(){
//    int  t;
//    cin>>t;
//    while(t--){
string s;
char ch;
cin>>s>>ch;
for(int i=0;i<=s.size();i++){
    if(s[i]==ch){
        if((i%2)==0){
            cout<<"Yes"<<endl;
            break;
        }

    }
}
cout<<"No"<<endl;
return 0;
}
