#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,o,p,q;
    cin>>m>>n>>o>>p;
int c=0,d=0,e=0,f=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        c++;
    }
    else if(s[i]=='2'){
        d++;
    }
  else   if(s[i]=='3'){
        e++;
    }
    else if(s[i]=='4'){
        f++;
    }
}
//cout<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
cout<<(q=m*c+n*d+o*e+p*f)<<endl;

}
