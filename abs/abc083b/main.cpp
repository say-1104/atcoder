#include <iostream>

using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int total = 0;
	for(int i=1; i<n+1; i++){
		auto SumofDigit = [&](int i) -> int {
			int sum = 0;
			while (i != 0) {
				sum += i%10;
				i /= 10;
			}
			return sum;
		};
		int sum = SumofDigit(i);
		if(a <= sum && sum <= b) total += i;
	}
	cout << total << endl;
	return 0;
}
