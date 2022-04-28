#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(1);
     s.insert(8);
      s.insert(6);
       s.insert(3);
      it=s.end();
      it--;
      int a=*it;
        *it--;
int b=*it;
       cout<<a<<" "<<b<<endl;


}
