#include<bits/stdc++.h>
using namespace std;
int main(){
//    int t;
//    cin>>t;
   // while(t--){
    int count1=0,count2=0,count3=0;
string s;
char ch;
cin>>s>>ch;
for(int i=0;i<s.size();i++){
    if(s[i]==ch){
             if((i%2)==0){
              count2++;
             }
       }
       else  if(s[i]==ch){
              count3++;
       }

    else if(s[i]!=ch) {
        count1++;
    }
}

if(count1==s.size()){
    cout<<"No"<<endl;
}
else if(count3==s.size()){
    cout<<"Yes"<<endl;
}
else if(count2%2==1){
    cout<<"Yes"<<endl;
}

return 0;
}
