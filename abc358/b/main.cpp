#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, A;
	int T;
	int Ttmp = 0;
	vector<int> t;
	cin >> N >> A;
	for (int i { 0 }; i<N; ++i){
		cin >> T;
		t.push_back(T);
	}
	for (int i=0; i<N; i++){
		if(t[i] >= Ttmp){
			Ttmp = t[i];
			Ttmp+=A;
		} else {
			Ttmp+=A;
		}
		cout << Ttmp << endl;
	}
	return 0;
}
