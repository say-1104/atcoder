#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int n, sn = 0, tmp;
    cin >> n;

    for(int i=10;i>0;i--){
        tmp = pow(10, i);
        sn += (n % tmp) / (tmp / 10);
    }

    if(n % sn == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
