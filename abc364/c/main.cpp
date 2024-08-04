#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long int x, y;
	cin >> n >> x >> y;
	vector<int> a, b;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		b.push_back(tmp);
	}

	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	int count = 0;
	long long int suma = 0, sumb = 0;
	int i = 0;
	while(true){
		suma += a[i]; sumb += b[i];
		count++;
		i++;
		if(suma > x || sumb > y || i == n){
			cout << count << endl;
			break;
		}
	}
	return 0;
}
