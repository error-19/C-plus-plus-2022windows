#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
            int k;
    cin>>k;
string s;
cin>>s;
 int ok,c=1;
for(int i=0;i<s.size();i++){
 if(s[i]==s[i+1]){
    c++;
 }
   else if(s[i]!=s[i+1]){
        for(int j=i+1;j<s.size();j++){
            if(s[i]!=s[j]){
                ok=1;
            }
            else{
                ok=0;
                break;//FFAGF
            }
        }
        if(ok==0){
            break;
        }
    }

}
if(c==s.size()){
    cout<<"Yes"<<endl;
}
else if(ok==1){
    cout<<"Yes"<<endl;
}
else if(ok==0){
    cout<<"No"<<endl;
}
    }

}
