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
    
    return 0;
}

