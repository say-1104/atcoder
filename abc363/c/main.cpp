#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	string s, tmps = "";
	cin >> s;
	sort(s.begin(), s.end());
	
	int count = 0;
	do {
		if(s == tmps) continue;
		//if(s.size() == 5) cout << s << endl;
		bool b = true;
		for(int i=0; i<n+1-k; i++){
			string s1, revs1;
			s1 = s.substr(i, k);
			//if(s.size() == 5) cout << s1 << endl;
			revs1 = s1;
			reverse(revs1.begin(), revs1.end());
			if(s1 == revs1) b = false;
		}
		if(b) count++;

		tmps = s;
    } while(next_permutation(s.begin(), s.end()));
	cout << count << endl;

	return 0;
}
