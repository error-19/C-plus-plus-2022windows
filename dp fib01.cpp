#include<bits/stdc++.h>
using namespace std;
const int M=50;
int cnt=1;
int mem[M];
int fib(int n){
cout<<"current call="<<cnt<<", n = "<<n<<endl;
cnt++;
if(n==0) return 0;
if(n==1)return 1;
if(mem[n]!=-1) return mem[n];
mem[n]=fib(n-1)+fib(n-2);
return mem[n];
}
int main(){
for(int i=0;i<M;i++) mem[i]=-1;
fib(-1);
return 0;
}

