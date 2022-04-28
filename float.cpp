#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
float a,b,c,d;
int f;
cin>>a>>b;
c=a*a+b*b;
d=sqrt(c);
f=abs(d);
if(d==0){
    cout<<"0"<<endl;
}
else if(d==f){
    cout<<"1"<<endl;
}
else{
    cout<<"2"<<endl;
}
    }
}
