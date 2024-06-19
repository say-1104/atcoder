#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for(int i=0; i<N ;i++){
		cin >> a[i];
	}
	int c = 2;
	int count = 0;
	while(true){
		bool flag = false;
		for(int i=0; i<N ;i++){
			if(a[i] % c != 0) flag = true;
		}
		if(flag) break;
		count++;
		c = c*2;
	}

	cout << count << endl;
	return 0;
}
