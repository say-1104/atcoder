#include <iostream>
#include <cmath>

using namespace std;
//各桁の和を計算
int SumforDigit(long long int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
};
int main() {
    long long int n, sn;
    cin >> n;

   sn = SumforDigit(n);

    if(n % sn == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
