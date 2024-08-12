#include <bits/stdc++.h>
using namespace std;
//各桁の和を計算
int SumforDigit(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
};
int main(){
    // 累積和の実装
    int N; cin >> N; // 配列サイズ
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i]; 

    vector<int> s(N+1, 0); // s[0] = 0 になる
    for (int i = 0; i < N; ++i) s[i+1] = s[i] + a[i];

    return 0;
}

