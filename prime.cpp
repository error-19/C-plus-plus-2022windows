#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
  int k,m;
 cin>>n;
        n=n-2;
        if(n<2){
            cout<<"-1"<<endl;
        }
        for(int j=2;j*j<n;j++){
            if(n%j==0){
                      m=1;
                break;

            }
            else{m=0;}
  }
  if(m==0){
        cout<<"2"<<" "<<n<<endl;
  }
  else{
              cout<<"-1"<<endl;

        }
}


