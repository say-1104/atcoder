#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
	unsigned long long int n;
	cin >> n;

	bitset<60> s1(n);

	for(unsigned long long int tmp = 0; tmp < n+1; tmp++){
		bool flag = true;
		bitset<60> s2(tmp);
		for(int i = 0; i < 60; i++){
			if(s2.test(i)){
				if(! s1.test(i)){
					flag = false;
				}
			}
		}
		if(flag) cout << tmp << endl;
	}
	

	return 0;
}
