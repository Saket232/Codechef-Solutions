#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		
		unordered_map <char,int> m;
		for(int i = 0,j = n-1;i < j;i++,j--){
			m[s[i]]++;
			m[s[j]]--;
		}
		int f = 0;
		for(auto i = m.begin();i != m.end();i++){
			if(i->second > 0  )
				f = 1;
		}
		if(f == 0) 
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
	return 0;
}