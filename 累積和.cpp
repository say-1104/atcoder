#include <bits/stdc++.h>
using namespace std;

int main(){
    // 1次元累積和
    int n; cin >> n; // 配列サイズ
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i]; 

    vector<int> s(n+1, 0); // s[0] = 0 になる
    for (int i = 0; i < n; ++i) s[i+1] = s[i] + a[i];

    // 区間 l <= i <= r の総和を求める
    int l, r;
    cin >> l >> r;
    //l--;
    cout << s[r] - s[l] << endl;



    // 2次元累積和
    int h, w; cin >> h >> w; // 配列サイズ
    vector<vector<int>> b(h, vector<int>(w, 0));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) cin >> b[i][j];
    }

    vector<vector<int>> sum(h+1, vector<int>(w+1, 0));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) sum[i+1][j+1] = sum[i][j+1] + sum[i+1][j] - sum[i][j] + b[i][j];
    }

    // 区間 l1 <= i <= r1, l2 <= j <= r2 の総和を求める
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    //l1--; l2--;
    cout << sum[r1][r2] - sum[l1][r2] - sum[r1][l2] + sum[l1][l2] << endl;



    // 3次元累積和
    int x, y, z; cin >> x >> y >> z; // 配列サイズ
    vector<vector<vector<int>>> c(x, vector<vector<int>>(y, vector<int>(z, 0)));
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++) cin >> c[i][j][k];
        } 
    }

    vector<vector<vector<int>>> sum3d(x+1, vector<vector<int>>(y+1, vector<int>(z+1, 0)));
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++) sum3d[i + 1][j + 1][k + 1] = sum3d[i][j + 1][k + 1] + sum3d[i + 1][j][k + 1] +
                                                                sum3d[i + 1][j + 1][k] - sum3d[i][j][k + 1] - sum3d[i][j + 1][k] -
                                                                sum3d[i + 1][j][k] + sum3d[i][j][k] + c[i][j][k];
        } 
    }

    // 区間 l1 <= i <= r1, l2 <= j <= r2, l3 <= k <= r3 の総和を求める
    int l1, r1, l2, r2, l3 , r3;
    cin >> l1 >> r1 >> l2 >> r2 >> l3 >> r3;
    //l1--; l2--; l3--;
    cout << sum3d[r1][r2][r3] - sum3d[l1][r2][r3] - sum3d[r1][l2][r3] -
                    sum3d[r1][r2][l3] + sum3d[l1][l2][r3] + sum3d[l1][r2][l3] +
                    sum3d[r1][l2][l3] - sum3d[l1][l2][l3] << endl;


    return 0;
}

