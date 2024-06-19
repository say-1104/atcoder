#include <iostream>
#include <vector>
using namespace std;
int sumVector(const vector<int>& v){
  int sum = 0;
  for(size_t i=0; i<v.size(); i++){
    sum += v[i];
  }
  return sum;
}

vector<int> _UD(vector<int> nowxy, int x){
	nowxy[1] = nowxy[1]-x;
	cout << "U\n" << endl;
	return nowxy;

}
vector<int> _D(vector<int> nowxy, int x){
	nowxy[1] = nowxy[1]+x;
	cout << "D\n" << endl;
	return nowxy;

}
vector<int> _L(vector<int> nowxy, int x){
	nowxy[0] = nowxy[0]-x;
	cout << "L\n" << endl;
	return nowxy;

}
vector<int> _R(vector<int> nowxy, int x){
	nowxy[0] = nowxy[0]+x;
	cout << "R\n" << endl;
	return nowxy;

}

int main() {
	int N, tmph, buff;
	cin >> N;
	vector<int> nowxy;
	nowxy = {0, 0};
	int track=0;
	vector<int> restcol;
	vector<int> restsum;
	vector<int> sumh;
	vector<vector<int>> h(N, vector<int>(N));
	for(int i=0;i<N;i++){
		buff = 0;
		for(int j=0;j<N;j++){
			cin >> h[i][j];
			buff += h[i][j];
			
		}
		sumh.push_back(buff);
	}
	int t = 0;
	while(nowxy[1] != N && t != restcol.size()){
		if(restcol.size() != 0){
			if(restcol[t] + track >= 0){
				//その行に移動
				t++;
			}

		}
		if(track + sumh[i] >= 0){
			//ならす作業+LかRどちらかに行く
		} else {
			restcol.push_back(nowxy[1]);		//行保存
			restsum.push_back(sumh[nowxy[1]]);	//合計値保存
		}
		
		nowxy = _D(nowxy, 1);//下の行に行く
		
	}
	for(int i=0;i<N;i++){
		//for(int j=0;j<N;j++){
			cout << sumh[i] ;
		//}
		cout << endl;
	}
	return 0;
}
