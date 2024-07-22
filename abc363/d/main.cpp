#include <bits/stdc++.h>

using namespace std;
long long int calckaibun(int i){
	long long int ans = 0;
	if(i == 1){
		ans = 10;
	} else if(i % 2 == 0){
		i = i/2;
		ans = (9 * pow(10, i-1));
	}else{
		i = (i-1)/2;
		ans = (9 * pow(10, i));
	}
	return ans;
}

int main() {
	long long int n;
	cin >> n;
	//cout << n << endl;
	int i = 1;
	long long int ctmp = 0;
	long long int ctmp_pre = 0;
	while(true) {
		ctmp += calckaibun(i);
		if(ctmp > n) break;
		ctmp_pre = ctmp;
		i++;
	}
	long long int newn = n - ctmp_pre;
	//cout << i << newn << endl;
	if(i == 1) {
		cout << newn-1 << endl;
		return 0;
	} if(i == 2) {
		cout << newn << newn << endl;
		return 0;
	} else {
		if(i % 2 == 0){
			newn -= 1;
			newn += (pow(10, i/2-1));
		}else{
			newn -= 1;
			newn += (pow(10, (i+1)/2-1));
		}
	}
	string s = to_string(newn);
	string s1, ans;
	s1 = s;
	reverse(s1.begin(), s1.end());
	if(i % 2 != 0) s1.erase(0, 1);
	

	ans = s + s1;
	cout << ans << endl;
	return 0;
}
