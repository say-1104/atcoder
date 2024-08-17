#include <bits/stdc++.h>
using namespace std;
using cr_pair = pair<long long int, int>;
struct edge {
	int to;
	int cost;
};
using Graph = vector<vector<edge>>;
int main() {
	int n, m;	cin >> n >> m;
	vector<long long int> a;
	for(int i=0; i<n; i++){
		long long int tmp; cin >> tmp;
		a.push_back(tmp);
	}

	Graph G(n);
	for (int i = 0; i < m; ++i) {
        int u, v, b;
        cin >> u >> v >> b;
		u--; v--;
        G[u].push_back({v, b});
        G[v].push_back({u, b});
    } 
	
	vector<long long int> dist(n, LONG_LONG_MAX);
	priority_queue<cr_pair, vector<cr_pair>, greater<cr_pair>> que;

	// 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = a[0];
    que.push({dist[0], 0}); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        cr_pair c = que.top(); // キューから先頭頂点を取り出す
		long long int d = c.first; // スタート地点から現在地までの距離
		int idx = c.second; // 現在地のindex
        que.pop();
		if (d > dist[idx]) // dist[idx]: 現時点でのidxまでの最速距離
    		continue; // 最速距離を更新できないなら意味がないので打ち切り

        // v から辿れる頂点をすべて調べる
        for (int i = 0; i < int(G[idx].size()); i++) {
			int to = G[idx][i].to; // graphの現在地から行けるi番目の節点のindex
			
            long long  int cost = G[idx][i].cost; // graphの現在地から行けるi番目の節点のcost
			//cout << to << " " << cost << endl;
 			if (d + cost + a[to] < dist[to]) // スタート地点から現在地までの総コスト + i番目の節点に行くのにかかるコスト < 現時点でのスタート地点からi番目の節点までの最速距離
            {
                dist[to] = d + cost + a[to]; // 新たな最速距離で更新
                que.push({dist[to], to}); //次の探索地点をキューに追加
            }
        }
    }
	cout << dist[1];
	for(int i = 2; i<n; i++) {
		cout << " " << dist[i];

	}
	cout << endl;
	return 0;
}
