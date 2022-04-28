#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
long long x,y,sum1=0,sum2=0,c,d;
long long a,b;
cin>>x>>y>>a>>b;
if(y>x){
    c=y-x;
    sum1=c*a;
  y=y-c;
}
if(x>y){
    c=x-y;
    sum1=c*a;
   x=x-c;
}
if(2*a<=b){
 sum1+=2*(x*a);
}
else{
    sum1+=x*b;
}
cout<<sum1<<endl;
    }
}
