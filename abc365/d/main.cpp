#include <bits/stdc++.h>

using namespace std;
int n;
string s;
bool b;
void dfs(int now, int mae, int k) {
    if(now == n) {
		b =  true;
		return;
	}
	if(k == -1){
		b = false;
		return;
	} 
    // v から行ける各頂点 next_v について
    for (int i=0; i<3; i++) {
		if(i == mae) continue;
        if(s[now] == 'R'){
			if(i == 0) {
				k--;
				now++;
				dfs(now, i, k);
			}
			if(i == 1) continue;
			if(i == 2) {
				now++;
				dfs(now, i, k);
			}
		}
        if(s[now] == 'S'){
			if(i == 1) {
				k--;
				now++;
				dfs(now, i, k);
			}
			if(i == 2) continue;
			if(i == 0) {
				now++;
				dfs(now, i, k);
			}
		}
        if(s[now] == 'P'){
			if(i == 2) {
				k--;
				now++;
				dfs(now, i, k);
			}
			if(i == 1) {
				now++;
				dfs(now, i, k);
			}
			if(i == 0) continue;
		}
        
    }
}
int main() {
	cin >> n;
	cin >> s;
	int l = 0, r = n;
	int mid;
	while(r-l > 1){
		mid = (l+r)/2;
		dfs(0, -1, n-mid);
		if(b) r = mid;
		else l = mid;
	}
	cout << l << endl;

	return 0;
}
