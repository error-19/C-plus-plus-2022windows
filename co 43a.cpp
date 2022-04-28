#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s = "abc";
	string s1 = "bca";
	string s2 = "cba";
	map<string, string> m;
	m.insert(pair<string, string>(s1, s));
	m.insert(pair<string, string>(s, s2));
	for (auto itr = m.begin();
		itr != m.end(); ++itr) {
		cout << itr->first << '\t'
			<< itr->second << '\n';
	}
return 0;
}

