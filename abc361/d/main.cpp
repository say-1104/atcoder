#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	string s, t; cin >> s; cin >> t;
	s += ".."; t += "..";
	n += 2;
	map<string, int> dist;
	queue<string> q;

	dist[s] = 0;
	q.push(s);

	while(!q.empty()){
		string nows = q.front();
		q.pop();

		int i_dot;
		for(int i=0; i<n-1; i++){
			if(nows[i] == '.') {
				i_dot = i;
				break;
			}
		}

		for(int i=0; i<n-1; i++){
			if(nows[i] != '.' && nows[i+1] != '.'){
				string news = nows;
				news[i_dot] = nows[i];	news[i_dot+1] = nows[i+1];
				news[i] = '.';	news[i+1] = '.';
				
				if(dist.find(news) == dist.end()){
					dist[news] = dist[nows] + 1;
					q.push(news);
				}
				
			}
		}
	}

	if(dist.find(t) != dist.end()) cout << dist[t] << endl;
	else cout << -1 << endl;


	return 0;
}
