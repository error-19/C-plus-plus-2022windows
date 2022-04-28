//সেটের মধ্যে সব সময় ইউনিক ইলিমেন্ট থাকেবে।।orde akaare sajano takbe
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
//    set<pair<int ,string>>s;
    set<map<int ,string>>s;
    for(int i=0;i<t;i++){
            int k;
        string a;
        cin>>k>>a;
        s.insert(k,[a++]);
    }
    for(auto u:s){
        cout<<u.first<<" " <<u.second<<endl;
    }

//set<int>s={2,3,4,5,6,7,8,9,5,5};
//s.clear();
//s.insert(5);
//s.insert(3);
//s.insert(4);
//s.insert(3);
//s.insert(7);
//s.erase(5);s.erase(7);
//cout<<*(s.begin())<<endl;
//cout<<*(s.rbegin())<<endl;
//set<int>::iterator it;
//cout<<s.size()<<endl;
//for(it=s.begin();it!=s.end();it++){
//    cout<<*it<<endl;
////}
//cout<<s.size()<<endl;
//for(auto u:s){
//    cout<<u<<endl;
//}
return 0;
}
