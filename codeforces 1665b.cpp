#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
cin>>t;
	vector<int> vect1;
	for(int i=0;i<t;i++){
        int k;
        cin>>k;
        vect1.push_back(k);
	}

	vector<int> vect2;
	for (int i=0; i<vect1.size(); i++){
		vect2.push_back(vect1[i]);
	}
	for(auto u:vect2){
        cout<<u<<" ";
	}

return 0;
}

